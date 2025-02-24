#include<iostream>
#include<math.h>

using namespace std;
int main() {

  float cel, kel;

  cout << "Introduce la temperatura en Celsius: "<<endl;
  cin >> cel;

  kel = cel + 273.15;
  cout << "El resultado en kelvin es: "<<kel<< endl;
}
