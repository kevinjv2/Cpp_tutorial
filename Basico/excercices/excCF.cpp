#include <iostream> 

int main() {
    /*Ejercicio 1: Número positivo, negativo o cero
    int x;

    std :: cout << "Ingresa un numero: ";
    std :: cin >> x;

    if ( x < 0 ) {
        std :: cout << "Numero negativo \n";
    } else if ( x == 0 ) {
        std :: cout << "Numero igual a 0 \n";
    } else {
        std :: cout << "Numero positivo \n";
    }
    */
    
    
    /*Ejercicio 2 
    int c;

    std :: cout << "Ingresa un numero: ";
    std :: cin >> c;

    if ( c >= 90 && c < 100) {
        std :: cout << "Excelente";
    } else if ( c >= 80 && c <= 89) {
        std :: cout << "Muy bien";
    } else if ( c >= 70 && c <= 79) {
        std :: cout << "Bien";
    } else if ( c >= 60 && c <= 69) {
        std :: cout << "Suficiente";
    } else if ( c <= 59 && c == 0) {
        std :: cout << "Reprobado";
    }
    */

    /*
    Ejercicio 3 
    Real life - DOOR CODE
    

    int code = 2403;
    int n;

    std :: cout << "Ingresa el codigo: \n";
    std :: cin >> n;

    if ( n == code) {
        std :: cout << "Puerta abierta.";
    } else {
        std :: cout << "Puerta Cerrada.";
    }
    */

    int n;

    std :: cout << "Ingresa un numero: \n";
    std :: cin >> n;

    if( n > 0) {
        std :: cout << "El numero es positivo.\n";
    } else if (n < 0) {
        std :: cout << "El numero es negativo. \n";
    } else {
        std :: cout << "El numero es igual a 0. \n";
    }


    
}