#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;
bool is_composite(int n){
    if (n<=1){
        return false;
    }
    for (int i=2; i<=(pow(n, 0.5)+1); i++){
        if ( !(n % i) && (n!=i)) return true;
    }
    return false;
}
bool is_more(int n){
    double S=0;
    int h = n;
    while (n > 0) {
        S += ((n % 10)*(n%10));
        n /= 10;           
    }
    return ((S>h) ? true: false);
    
}
int main(){
    setlocale(LC_ALL, "Russian");
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