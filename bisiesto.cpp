#include<iostream>
#include<math.h>

using namespace std;
int main() {

int year;

  cout << "Ingresar un anio por favor";
  cin >> year;

  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
     cout << "El anio " << year << " es biciesto" << endl;
  }
  else {
     cout << "El anio " << year << " no es biciesto" << endl;
  }
}