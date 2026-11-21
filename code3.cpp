#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;
bool is_prime(long int n){
    if (n<=1){
        return false;
    }
    for (long int i=2; i<=(pow(n, 0.5)+1); i++){
        if ( !(n % i) && (n!=i)) return false;
    }
    return true;
}
double S;
bool is_more(long int n){
    S=0;
    long int h = n;
    while (n > 0) {
        S += ((n % 10)*(n%10));
        n /= 10;           
    }
    return ((S>h) ? true: false);
    
}
int main(){
    setlocale(LC_ALL, "Russian");
    int N, n, M; 
    cout <<"N="; cin >>N;
    cout <<"M="; cin >>M;
    long int a[M], b[M][2];
    for (n=0; n<M; n++){
        cout <<"a["<<n<<"]="; cin>>a[n];
    }
    cout << "Элементы массива a:\n";
    for (n=0; n<M; n++){
        cout <<a[n]<<"\n";
    }
    for (n=0; n<M; n++){
        b[n][0]=0;
        b[n][1]=0;
    }
    for (n=0; n<M; n++){
        if (a[n]<=N){
        if ((is_prime(a[n]))){
            if (is_more(a[n])){
                b[n][0]=a[n];
                b[n][1]=S;
            }
        }
        }
    }
    cout << "Элементы массива b:\n";
    for (n=0; n<M; n++){
        if (b[n][0]) cout <<b[n][0]<<" Cумма квадратов цифр числа "<<b[n][0]<<" равна "<<b[n][1]<<"\n";
    }
    return 0;
}