#include <iostream>

#include <cmath>

using namespace std;
int main()
{
int hectometros, decametros, metros, decimetros;
cout << " INTRODUZACA HECTOMETROS: " <<endl;
cin >> hectometros;
cout << "INTRODUZCA DECAMETROS: " <<endl;
cin >> decametros;
cout << "INTRODUSCA METROS: " << endl; 
cin >> metros;
decimetros = ((hectometros * 10 + decametros) * 10 + metros) * 10;
cout << " NUMERO DE DECIMETROS ES: "<< decimetros << endl;

return 0;
}