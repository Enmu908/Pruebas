#include<iostream>
#include<math.h>

using namespace std;
int main()

{

  float cateA, cateB, hipo, area, p;
  cout << "Ingrese el valor del cateto A: ";
  cin >> cateA;
  cout << "Ingrese el valor del cateto B: ";
  cin >> cateB;
  cout << "Ingrese el valor de la hipotenusa: ";
  cin >> hipo;

  p = (cateA + cateB + hipo) / 2.0;

  area = sqrt(p * (p - cateA) * (p - cateB) * (p - hipo));

  cout << "El area del triangulo es: " << area << endl;
  return 0;
}