#include <iostream>
#include <math.h>
using namespace std;
int main(){    
    setlocale(LC_ALL, "Russian");
    long long int k=0, x;
    double S=1, eps, eps1, t=1;
    cout << "x="; cin>>x;
    cout << "eps начальное="; cin>>eps;
    cout << "eps конечное="; cin>>eps1;
    cout << "\n";
    while (eps>=eps1)
    {
        //Scout <<"t="<<t<<" S="<<S<<" k="<<k<<" eps="<<eps<<endl;       
        cout << t << endl;
        k++;
        t=t*(-x)/(k*k);
        if (abs(t)<eps){
            k=0; 
            t=1;
            eps=eps/10;
            cout<< endl;
            continue;
        }
        S+=t;
    }
    cout << "S="<< S<< endl;

    return 0;
}