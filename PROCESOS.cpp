#include <iostream>

using namespace std;

int main() {
    int ladoA, ladoB;

    // Solicitar valores al usuario
    cout << "Ingrese el valor para el lado A: ";
    cin >> ladoA;

    cout << "Ingrese el valor para el lado B: ";
    cin >> ladoB;

    if (ladoA == 0 || ladoB == 0) {
        cout << "Ninguno de los valores puede ser 0" << endl;
    } 
    else if (ladoA == ladoB) {
        int area = ladoA * ladoB;
        cout << "El resultado del área es: " << area << " y es un cuadrado" << endl;
    } 
    else {
        int area = ladoA * ladoB;
        cout << "El resultado del área es: " << area << endl;
    }

    return 0;
}