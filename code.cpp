#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n=1, M;

    double S=0;

    cout << "M="; cin>>M;
    
    for (n; n<=M ; n++) S += pow((n+1),n);

    cout << "S="<< S;

    return 0;
}