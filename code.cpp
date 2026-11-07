#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n=1, M;

    double S=0;

    cout << "M="; cin>>M;
    
    for ( ; n<=M ; n++) S += pow((n+1),n);

    cout << S;

    return 0;
}