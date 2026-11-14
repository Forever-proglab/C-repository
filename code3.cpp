#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool is_composite(int n){
    if (n<=1){
        return false;
    }
    for (int i=2; i<=n; i++){
        if ( !(n % i) and n!=i) return true;
    }
    return false;
}
int is_more(int n){
    double S=(n*n);
    while (n > 0) {
        S += pow((n % 10), 2);
        n /= 10;           
    }
    return ((S>n) ? 1: 2);
    
}
int main(){
    int N, n, k=0; 
    cout <<"N="; cin >>N;
    double a[N];
    for (n=0; n<N; n++){
        a[n]=0;
    }
    for (n=2; n<=N; n++){
        if (not (is_composite(n))){
            if (is_more(n)){
                a[k]=n;
                k+=1;
            }
        }
    }
    cout << "Элементы массива a:\n";
    for (n=0; n<N; n++){
        if (a[n]) cout <<a[n]<<" ";
    }
    return 0;
}