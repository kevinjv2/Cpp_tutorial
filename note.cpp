#include <iostream>
using namespace std;

int main() {

    //Repaso de switch
    int dia;

    cout << "------ Dias de la semana -------\n";
    cout << "1. Lunes \n2. Martes \n3. Miercoles \n";
    cout << "Ingresa el dia: ";
    cin >> dia;

    switch(dia) {
        case 1: 
            cout << "Ir a la escuela";
        break;

        case 2:
            cout << "Ir al gym";
        break;

        case 3:
            cout << "Ir a cenar";
        break;
    }


    int food;

    cout << "----- Menu de comida ------\n";
    cout << "1. Hamburguesa\n2. Pizza\n3. Tacos\n4. Ensalada \n";

    cout << "Ingresa una opcion de comida: ";
    cin >> food;

    switch (food){
    case 1:
        cout << "Hamburguesa: $150";
        break;
    
    case 2:
        cout << "Pizza: $50";
        break;

    case 3:
        cout << "Tacos: 30";
        break;
    
    case 4:
        cout << "Ensalada: 100";
        break;
    
    default:
        cout << "Opcion no valida";
    }

}