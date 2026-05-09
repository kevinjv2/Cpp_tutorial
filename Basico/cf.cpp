#include <iostream> 
#include <string>

int main() {

    // ---------------- IF -----------------
    /*
    int n = 20;
    int b = 50;

    if( n < b) {
        std :: cout << "20 es mayor a 50 \n";
    }
    */


    // ---------------- IF ELSE -----------------
    /*
    int x;
    int y;

    std :: cout << "Que hora es: ";
    std :: cin >> x;

    std :: cout << "Que dia es: ";
    std :: cin >> y;

    if (x < 12) {
        std:: cout << "Good morning\n";
    } else {
        std:: cout << "Good evening\n";
    }

    if (y > 5) {
        std :: cout << "Es fin de semana \n";
    } else {
        std :: cout << "Es inicio de semana \n";
    }

    */
    


    // --------- Short Hand If Else --------------
    /*
    int time = 20;
    
    std :: string result = ( time < 18) ? "Good morning. " : "Good evening.";
    std :: cout << result;



    // --------- Nested if --------------

    int n1 = 200;
    int n2 = 150;

    if (n1 > n2 ) {
        std :: cout << n1 << " Es mayor que:  150 \n";  
    if ( n2 < n1) {
        std :: cout << n2 << " Es menor que: 200";
        }
    }
    */


    char operador;
    int n1, n2;

    std :: cout << "Ingresa un operador: \n +   *   -   /" <<std :: endl;
    std :: cin >> operador;

    std :: cout << "Ingresa 2 numeros: ";
    std :: cin >> n1 >> n2;

    switch (operador) {
        case '+':
        std :: cout << "La suma de " << n1 << " y " << n2 << " es igual a " << n1+ n2;
        break;
        
        case '-':
        std :: cout << "La resta de " << n1 << " y " << n2 << "es igual a " << n1 - n2;
        break;

        case '*':
        std :: cout << "La multiplicacion de " << n1 << " y " << n2 << " es igual a " << n1 * n2;
        break;
        
        case '/':
        std :: cout << "La división de " << n1 << " y " << n2 << "es igual a " << n1 / n2;
        break;
        
    }

}