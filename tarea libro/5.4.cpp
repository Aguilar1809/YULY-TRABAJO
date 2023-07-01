#include <cstdlib>
#include <iostream>
using namespace std;
int main(){

int i, j, n;
do
{
cout <<"valor de n positivo ";
cin >>n;
}
while (n <= 0); 
for (i = n; i >= 1; i--)
{
for (j = 1 ; j <= i; j++) 
cout << " " << j;
cout << endl; 
}

return 0;
}