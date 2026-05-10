#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

// ================= ENUMS =================
enum class Priority {
    LOW,
    MEDIUM,
    HIGH
};

enum class Status {
    PENDING,
    COMPLETED
};

// ================= UTILIDADES =================
string priorityToString(Priority p) {
    switch (p) {
        case Priority::LOW: return "LOW";
        case Priority::MEDIUM: return "MEDIUM";
        case Priority::HIGH: return "HIGH";
    }
    return "UNKNOWN";
}

Priority stringToPriority(const string& str) {
    if (str == "LOW") return Priority::LOW;
    if (str == "MEDIUM") return Priority::MEDIUM;
    return Priority::HIGH;
}

string statusToString(Status s) {
    return (s == Status::PENDING) ? "PENDING" : "COMPLETED";
}

Status stringToStatus(const string& str) {
    return (str == "COMPLETED") ? Status::COMPLETED : Status::PENDING;
}

// ================= CLASE TASK =================
class Task {
private:
    int id;
    string title;
    string description;
    Priority priority;
    Status status;

public:
    Task(int id, string title, string desc, Priority p)
        : id(id), title(title), description(desc), priority(p), status(Status::PENDING) {}

    int getId() const { return id; }
    string getTitle() const { return title; }
    string getDescription() const { return description; }
    Priority getPriority() const { return priority; }
    Status getStatus() const { return status; }

    void markCompleted() { status = Status::COMPLETED; }

    string serialize() const {
        stringstream ss;
        ss << id << "|" << title << "|" << description << "|"
           << priorityToString(priority) << "|" << statusToString(status);
        return ss.str();
    }

    static Task deserialize(const string& line) {
        stringstream ss(line);
        string segment;
        vector<string> parts;

        while (getline(ss, segment, '|')) {
            parts.push_back(segment);
        }

        Task t(
            stoi(parts[0]),
            parts[1],
            parts[2],
            stringToPriority(parts[3])
        );

        if (parts[4] == "COMPLETED") {
            t.markCompleted();
        }

        return t;
    }

    void print() const {
        cout << "ID: " << id << '\n';
        cout << "Title: " << title << '\n';
        cout << "Description: " << description << '\n';
        cout << "Priority: " << priorityToString(priority) << '\n';
        cout << "Status: " << statusToString(status) << '\n';
        cout << "-----------------------------\n";
    }
};

// ================= CLASE TASK MANAGER =================
class TaskManager {
private:
    vector<Task> tasks;
    int nextId;

public:
    TaskManager() : nextId(1) {}

    void addTask(const string& title, const string& desc, Priority p) {
        tasks.emplace_back(nextId++, title, desc, p);
    }

    void listTasks() const {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
            return;
        }

        for (const auto& t : tasks) {
            t.print();
        }
    }

    void completeTask(int id) {
        for (auto& t : tasks) {
            if (t.getId() == id) {
                t.markCompleted();
                cout << "Task completed.\n";
                return;
            }
        }
        cout << "Task not found.\n";
    }

    void deleteTask(int id) {
        auto it = remove_if(tasks.begin(), tasks.end(),
            [id](const Task& t) { return t.getId() == id; });

        if (it != tasks.end()) {
            tasks.erase(it, tasks.end());
            cout << "Task deleted.\n";
        } else {
            cout << "Task not found.\n";
        }
    }

    void saveToFile(const string& filename) {
        ofstream file(filename);
        for (const auto& t : tasks) {
            file << t.serialize() << '\n';
        }
        file.close();
    }

    void loadFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) return;

        tasks.clear();
        string line;

        while (getline(file, line)) {
            tasks.push_back(Task::deserialize(line));
        }

        if (!tasks.empty()) {
            nextId = tasks.back().getId() + 1;
        }

        file.close();
    }

    void showStats() const {
        map<string, int> stats;

        for (const auto& t : tasks) {
            stats[statusToString(t.getStatus())]++;
        }

        cout << "---- STATS ----\n";
        cout << "Pending: " << stats["PENDING"] << '\n';
        cout << "Completed: " << stats["COMPLETED"] << '\n';
    }
};

// ================= INPUT HELPERS =================
Priority getPriorityFromUser() {
    int choice;
    cout << "Priority (1=LOW, 2=MEDIUM, 3=HIGH): ";
    cin >> choice;

    switch (choice) {
        case 1: return Priority::LOW;
        case 2: return Priority::MEDIUM;
        case 3: return Priority::HIGH;
        default: return Priority::LOW;
    }
}

// ================= MENU =================
void showMenu() {
    cout << "\n===== TASK MANAGER =====\n";
    cout << "1. Add Task\n";
    cout << "2. List Tasks\n";
    cout << "3. Complete Task\n";
    cout << "4. Delete Task\n";
    cout << "5. Stats\n";
    cout << "6. Exit\n";
    cout << "Choice: ";
}

// ================= MAIN =================
int main() {
    TaskManager manager;
    manager.loadFromFile("tasks.txt");

    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string title, desc;

            cout << "Title: ";
            getline(cin, title);

            cout << "Description: ";
            getline(cin, desc);

            Priority p = getPriorityFromUser();

            manager.addTask(title, desc, p);
        }
        else if (choice == 2) {
            manager.listTasks();
        }
        else if (choice == 3) {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            manager.completeTask(id);
        }
        else if (choice == 4) {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            manager.deleteTask(id);
        }
        else if (choice == 5) {
            manager.showStats();
        }

    } while (choice != 6);

    manager.saveToFile("tasks.txt");

    return 0;
}