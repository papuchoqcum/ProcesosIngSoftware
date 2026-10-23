#include <iostream>

using namespace std;

int main() {
    int ladoA, ladoB, ladoC;

    cout << "Ingrese el valor A: ";
    cin >> ladoA;
    cout << "Ingrese el valor B: ";
    cin >> ladoB;
    cout << "Ingrese el valor C: ";
    cin >> ladoC;

    if (ladoA < 0 || ladoB < 0 || ladoC < 0) {
        cout << "Los valores no indican figura" << endl;
    }
    else if (ladoA > 0 && ladoB > 0 && ladoC > 0) {
        if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
            if (ladoA == ladoB && ladoB == ladoC) {
                cout << "La figura es un triangulo equilatero" << endl;
            }
            else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
                cout << "La figura es un triangulo isosceles" << endl;
            }
            else {
                cout << "La figura es un triangulo escaleno" << endl;
            }
        }
        else {
            cout << "Los valores no indican figura" << endl;
        }
    }
    else if (ladoA > 0 && ladoB > 0 && ladoC == 0) {
        if (ladoA == ladoB) {
            cout << "La figura es un cuadrado" << endl;
        }
        else {
            cout << "La figura es un rectangulo" << endl;
        }
    }
    else if (ladoA > 0 && ladoB == 0 && ladoC == 0) {
        cout << "La figura es un circulo" << endl;
    }
    else {
        cout << "Los valores no indican figura" << endl;
    }

    return 0;
}