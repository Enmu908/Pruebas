#include <math.h>
#include <iostream>

using namespace std;
int main()

{
   float longi, rad, area, volum;
   float pi = 3.14;
   cout << "Ingrese el radio"<<endl;
   cin >> rad;

   longi = 2 * pi * rad;

   volum = (4.0 / 3.0) * pi * pow(rad, 3);

   area = pi * pow(rad, 2);

   cout << "Longitud de la circunferencia: " << longi << endl;
   cout << "El area de la circunferencia: " << area << endl;
   cout << "EL volumen de la circunferencia: " << volum << endl;

   return 0;
}