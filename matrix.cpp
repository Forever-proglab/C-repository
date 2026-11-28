#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    double m;
    long int N, i, j;

    cout << "N="; cin >> N;

    double a[N][N], b[N*N];

    for (i=0; i<N; i++)
        for (j=0; j<N; j++){
            cout <<"Элемент "<<i+1<<" строки и "<<j+1<<" столбца матрицы равен "; cin>>a[i][j];
        }
    cout << "Матрица: \n";
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            cout << a[i][j]<<' ';
        }
        cout << "\n";
    }
    for (i=0; i<(N*N); i++){
        b[i]=0;
    }/*
    for (i=N-1; i>=0; i--){
        b[i][0]=;
    }*/
    for (i=0; i<(N*N); i++){
        
    }
    return 0;
}