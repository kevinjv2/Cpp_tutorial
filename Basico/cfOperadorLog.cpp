/* * ============================================================
 * GUÍA COMPLETA: OPERADORES LÓGICOS EN C++
 * ============================================================
 * Este programa demuestra cómo combinar condiciones usando:
 * && (AND) : Devuelve true solo si TODAS las condiciones son true.
 * || (OR)  : Devuelve true si AL MENOS UNA condición es true.
 * !  (NOT) : Invierte el valor (true se vuelve false y viceversa).
 * ============================================================
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables de prueba
    int a = 200;
    int b = 33;
    int c = 500;

    // --- 1. OPERADOR AND (&&) ---
    // Ambas deben ser ciertas: (200 > 33) ES CIERTO y (500 > 200) ES CIERTO.
    cout << "--- Prueba AND (&&) ---" << endl;
    if (a > b && c > a) {
        cout << "Ambas condiciones son verdaderas (AND)." << endl;
    }
    cout << "-----------------------" << endl << endl;


    // --- 2. OPERADOR OR (||) ---
    // Basta con que una sea cierta. Aquí (200 > 33) es true, aunque (200 > 500) sea false.
    cout << "--- Prueba OR (||) ---" << endl;
    if (a > b || a > c) {
        cout << "Al menos una condicion es verdadera (OR)." << endl;
    }
    cout << "-----------------------" << endl << endl;


    // --- 3. OPERADOR NOT (!) ---
    // Invierte el resultado. 33 > 200 es falso, pero ! lo hace verdadero.
    cout << "--- Prueba NOT (!) ---" << endl;
    int x = 33;
    int y = 200;
    if (!(x > y)) {
        cout << "x NO es mayor que y (el operador ! invirtio el falso a verdadero)." << endl;
    }
    cout << "-----------------------" << endl << endl;


    // --- 4. EJEMPLO DE LA VIDA REAL (Control de Acceso) ---
    // Combinamos todo para una toma de decisiones compleja.
    cout << "--- Ejemplo de Acceso al Sistema ---" << endl;
    
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // Nivel 3 no tiene acceso a menos que sea Admin

    // Lógica: Debe estar logueado Y (ser Admin O tener nivel de seguridad 1 o 2)
    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        cout << "ESTADO: Acceso concedido." << endl;
    } else {
        cout << "ESTADO: Acceso denegado. Revisa tus permisos." << endl;
    }
    
    cout << "-----------------------" << endl;

    return 0;
}