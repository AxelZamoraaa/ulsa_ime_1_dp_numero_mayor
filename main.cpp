#include <iostream>

#include <string>
#include "utilerias.h"

using namespace std;

int main() {
    
    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    double mayor = 0;
    string respuesta = "si";

    cout << "Bienvenido al mayor de tres numeros" << endl;
    
    while (respuesta == "si") {
        

      num1 = leerDecimal("Primero numero: ");
      num2 = leerDecimal("Segundo numero: ");
      num3 = leerDecimal("Tercer numero: ");

        if (num1 == num2 && num2 == num3) {
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