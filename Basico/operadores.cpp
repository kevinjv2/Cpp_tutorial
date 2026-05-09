#include <iostream>
using namespace std;

int main() {

    cout << "===== OPERADORES EN C++ =====\n";

    // ================= 1. ARITMETICOS =================
    int a = 10, b = 3;
    float x = 5.5, y = 2.0;

    cout << "---- Aritmeticos ----\n";
    cout << "a + b = " << a + b << '\n';
    cout << "a - b = " << a - b << '\n';
    cout << "a * b = " << a * b << '\n';
    cout << "a / b = " << a / b << " (entera)\n";
    cout << "x / y = " << x / y << " (decimal)\n";
    cout << "a % b = " << a % b << '\n';
    cout << '\n';

    // ================= 2. RELACIONALES =================
    cout << "---- Relacionales ----\n";
    cout << "a == b: " << (a == b) << '\n';
    cout << "a != b: " << (a != b) << '\n';
    cout << "a > b: " << (a > b) << '\n';
    cout << "a < b: " << (a < b) << '\n';
    cout << "a >= b: " << (a >= b) << '\n';
    cout << "a <= b: " << (a <= b) << '\n';
    cout << '\n';

    // ================= 3. LOGICOS =================
    cout << "---- Logicos ----\n";
    cout << "(a > b) && (x > y): " << ((a > b) && (x > y)) << '\n';
    cout << "(a < b) || (x > y): " << ((a < b) || (x > y)) << '\n';
    cout << "!(a > b): " << (!(a > b)) << '\n';
    cout << '\n';

    // ================= 4. ASIGNACION =================
    cout << "---- Asignacion ----\n";
    int c = 5;

    c += 3;
    cout << "c += 3 -> " << c << '\n';

    c -= 2;
    cout << "c -= 2 -> " << c << '\n';

    c *= 4;
    cout << "c *= 4 -> " << c << '\n';

    c /= 3;
    cout << "c /= 3 -> " << c << '\n';

    c %= 3;
    cout << "c %= 3 -> " << c << '\n';
    cout << '\n';

    // ================= 5. INCREMENTO / DECREMENTO =================
    cout << "---- Incremento / Decremento ----\n";
    int i = 5;

    cout << "i = " << i << '\n';
    cout << "i++ (post): " << i++ << '\n';
    cout << "Despues: " << i << '\n';

    cout << "++i (pre): " << ++i << '\n';

    cout << "i-- (post): " << i-- << '\n';
    cout << "Despues: " << i << '\n';

    cout << "--i (pre): " << --i << '\n';
    cout << '\n';

    // ================= 6. TERNARIO =================
    cout << "---- Operador Ternario ----\n";
    int edad = 18;

    string mensaje = (edad >= 18) ? "Mayor de edad" : "Menor de edad";
    cout << "Resultado: " << mensaje << '\n';
    cout << '\n';

    // ================= 7. OPERADORES DE BITS =================
    cout << "---- Operadores de Bits ----\n";
    int m = 6; // 110
    int n = 3; // 011

    cout << "m & n = " << (m & n) << '\n';
    cout << "m | n = " << (m | n) << '\n';
    cout << "m ^ n = " << (m ^ n) << '\n';
    cout << "~m = " << (~m) << '\n';
    cout << "m << 1 = " << (m << 1) << '\n';
    cout << "m >> 1 = " << (m >> 1) << '\n';

    return 0;
}