#include<iostream>
using namespace std;

int main(){
    int i=1 , n;
    cin >>n;
    while ( i<=n)

    if((i % n)==0)
    ++i;

    cout << i << endl;
    return 0;
    
}


//¿cual es la salida si se introduce el valor n,0? la salida es 1.
//¿cual es la salida si se introduce el valor n,1? la salida es 2.
//¿cual es la salida si se introduce el valor n,3? la salida es imfinita por que no hy respuesta.