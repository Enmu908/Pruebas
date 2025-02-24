#include<iostream>
#include<math.h>
using namespace std;
int main() {

float F1, F2, angulo, resultado;

  cout << "ingrese el valor de la primera fuerza: " << endl;
  cin >> F1;
  cout << "ingrese el valor de la segunda fuerza: " << endl;
  cin >> F2;
  cout << "ingrese el valor del angulo: " << endl;
  cin >> angulo;

  resultado = sqrt(pow(F1, 2) + pow(F2, 2) + 2 * F1 *
  F2 * cos(angulo));

  cout << "El resultado es: " << resultado << endl;
}
