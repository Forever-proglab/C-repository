#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long int k=0, x;
    cout << "x="; cin>>x;
    long double S=1, eps=0.1, t=1;
    for (eps; eps >= pow(10, -7); ){
        cout << "S=" <<S<<" "<< "t=" <<t<<" "<< "k=" <<k<<" "<< "eps=" << eps<<"\n";
        while (abs(t)>eps)
        {
            k++;
            t=t*(-x)/(k*k);
            S+=t;
            cout << "S=" <<S<<" "<< "t=" <<t<<" "<< "k=" <<k<<" "<< "eps=" << eps<<"\n";
        }
        S=1; t=1; k=0; eps= eps / 10; cout << '\n';
    }
    return 0;
}