#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double i = 2, N, a, b, m;
    cout << "N="; cin >> N;
    cout <<"a="; cin>>a;
    cout <<"b="; cin>>b;
    m = a-b;
    for (i; i<=N; i++){
        cout <<"a="; cin>>a;
        cout <<"b="; cin>>b;
        if ((a-b)<=m) m=a-b;
    }
    cout << "m="<<m;
    return 0;
}