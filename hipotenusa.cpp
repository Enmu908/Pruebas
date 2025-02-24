#include<iostream>
#include<math.h>
using namespace std;
int main()
{

  float catetoA, catetoB, hipotenusa;

  cout << "ingresar el cateto 1:" << endl;
  cin >> catetoA;
  cout << "ingresar el cateto 2:" << endl;
  cin >> catetoB;

  hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

  cout << "la hipotenusa es: " << hipotenusa << endl;
}