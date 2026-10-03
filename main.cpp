#include <iostream>

#include <string<
#include "utilerias.h"

using namespace std;

int main() {
    
    double num1 = 0
    double num2 = 0;
    double num3 = 0;
    double mayor = 0;
    string respuesta = "si";

    cout << "Programa: el mayor de tres numeros" << endl;
    
    while (respuesta == "si") {
        
        cout << "Primero numero: ";
        cin >> num1;
        cout << "Segundo numero: ";
        cin >> num2;
        cout << "Tercer numero: ";
        cin >> num3;

        if (num1 == num && num2 == num3) {
            cout << "Los tres numeros son iguales" << endl;
        } else {
          if (num1 >= num2 && num1 >= num3) {
              mayor = num1;
          } else if (num2 >= num1 && num2 >= num3) {
              mayor = num2;
          } else {
              mayor = num3;
          }
          cout << "El mayor es: " << mayor << endl;
        }

        cout << "Quieres intentarlo otra vez? (si/no): ";
        cin >> respuesta;
    }

    cout << "Gracias por usar el programa" << endl;

    return 0;
}