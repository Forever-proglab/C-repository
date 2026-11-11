#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double m;
    int N, n;

    cout << "N="; cin >> N;

    double a[N], b[N];

    cout << endl;

    for (n=0; n<N; n++){
        cout <<"a["<<n<<"]="; cin>>a[n];
    }
    for (n=0; n<N; n++){
        cout <<"b["<<n<<"]="; cin>>b[n];
    }
    cout << "Elementy massiva a:\n";
    for (n=0; n<N; n++){
        cout <<a[n]<<" ";
    }
    cout << endl;
    cout << "Elementy massiva b:\n";
    for (n=0; n<N; n++){
        cout <<b[n]<<" ";
    }
    cout << endl;
    
    m = a[0] - b[0];
    for (n=1; n<N; n++){
        if ((a[n]-b[n]) <= m) m=a[n]-b[n];
    }
    cout << "m="<<m;
    return 0;
}