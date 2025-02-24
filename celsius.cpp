#include<iostream>
#include<math.h>

using namespace std;

int main()

{
  float centi, faren;

  cout << "Introduce los centigrados: "<<endl;
  cin >> centi;
//formula para convertir grados centigrados a farenheit
  faren = 32 + (9 * centi / 5);
//mostramos el resultado
  cout << "Los grados en farenheit son: " << faren << endl;
}