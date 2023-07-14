//EJERCICIO 2 GUAÑUNA-JESUS_:)//
//Hacer un programa que muestre 3 números ordenados desendentemente, utilizar un//
//procedimiento para cada operación//
#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void ordenarDescendente(int& num1, int& num2, int& num3) {
    if (num1 < num2)
        intercambiar(num1, num2);
    if (num1 < num3)
        intercambiar(num1, num3);
    if (num2 < num3)
        intercambiar(num2, num3);
}

int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    ordenarDescendente(num1, num2, num3);

    cout << "Los numeros en orden descendente son: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}
