#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    
float radio, area, volumen, pi=3.2141592;
do
{
cout << "valor del radio positivo " << endl;
cin >> radio;
} while (radio <= 0);

area = 4 * pi * radio * radio;
volumen = 4.0 / 3 * pi * radio * radio * radio;
cout <<"el area y volumen de la esfera de radio r = " << radio<<endl;
cout << "area = " << area << " volumen = " << volumen ;

return 0;
}