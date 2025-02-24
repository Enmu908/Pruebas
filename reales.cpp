#include<iostream>
#include<math.h>

using namespace std;
int main() {

double dato1, dato2, div;

 cout << "ingresar el primer dato: "<<endl;
 cin >> dato1;
 cout << "ingresar el segundo dato: " << endl;
 cin >> dato2;

 div = dato1 / dato2;

 if (dato2 == 0) {
     cout << "E R R O R" << endl;
 }
 else if (dato1 == 0) {
     cout << "El resultado es: 0" << endl;
 }
 else {
     cout << "El resultado es: " << div << endl;
 }
}

