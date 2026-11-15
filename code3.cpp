#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;
bool is_composite(int n){
    if (n<=1){
        return true;
    }
    for (int i=2; i<=(pow(n, 0.5)+1); i++){
        if ( !(n % i) && (n!=i)) return true;
    }
    return false;
}
double S;
bool is_more(int n){
    S=0;
    int h = n;
    while (n > 0) {
        S += ((n % 10)*(n%10));
        n /= 10;           
    }
    return ((S>h) ? true: false);
    
}
int main(){
    setlocale(LC_ALL, "Russian");
    int N, n; 
    cout <<"N="; cin >>N;
    int a[N], b[N][2];
    for (n=0; n<N; n++){
        cout <<"a["<<n<<"]="; cin>>a[n];
    }
    cout << "Элементы массива a:\n";
    for (n=0; n<N; n++){
        cout <<a[n]<<"\n";
    }
    for (n=0; n<N; n++){
        b[n][0]=0;
        b[n][1]=0;
    }
    for (n=0; n<N; n++){
        if (!(is_composite(a[n]))){
            if (is_more(a[n])){
                b[n][0]=a[n];
                b[n][1]=S;
            }
        }
    }
    cout << "Элементы массива b:\n";
    for (n=0; n<N; n++){
        if (b[n][0]) cout <<b[n][0]<<" Cумма квадратов цифр этого числа:"<<b[n][1]<<"\n";
    }
    return 0;
}