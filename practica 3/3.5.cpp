#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float m, energia;

const float C = 2.997925 ;
cout <<"INTRODUSCA LA MASA: \n ";
cin>> m;
cout << "ENERGIA EM ERGIOS \n ";
cin >> energia;
energia = C * m * m * m;
cout << " energia en ergios : " << energia;

return 0;



}