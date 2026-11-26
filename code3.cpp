#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;
bool is_prime(long long int n){
    if (n<=1){
        return false;
    }
    for (long long int i=2; i<=(pow(n, 0.5)+1); i++){
        if ( (n % i==0) && (n!=i)) return false;
    }
    return true;
}
double S;
bool is_more(long long int n){
    S=0;
    long long int h = n;
    while (n > 0) {
        S += ((n % 10)*(n%10));
        n /= 10;           
    }
    if (S>h) return true;
    else return false;
}
int main(){
    setlocale(LC_ALL, "Russian");
    long long int N, n, m; 
    cout <<"N="; cin >>N;
    long long int a[N][2];
    for (m=0; m<N; m++){
        a[m][1]=0;
        a[m][0]=0;
    }
    for (n=1, m=0; n<=N, m<N; n++, m++){
        if ((is_prime(n))){
            if (is_more(n)){
                a[m][0]=n;
                a[m][1]=S;
            }
        }
    }
    cout << "Элементы массива a:\n";
    for (m=0; m<N; m++){
        if (a[m][0]!=0) cout <<a[m][0]<<" Cумма квадратов цифр числа "<<a[m][0]<<" равна "<<a[m][1]<<"\n";
    }
    return 0;
}