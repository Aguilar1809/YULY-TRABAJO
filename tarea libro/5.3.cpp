#include <cstdlib>
#include <iostream>

using namespace std;
int main(){


int np = 0, nn = 0 , nulos = 0, dato, max=10;
for (int i = 1; i <= max; i++)
{
cin >> dato;
if (dato > 0)
np++;
else if (dato < 0)
nn++;

else
nulos++;
}
cout <<"positivos negativos nulos "<< endl;
cout << np << " " << nn <<" " << nulos;

return 0;
}