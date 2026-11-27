#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;
const long int N=900;
ofstream fout;
struct student
    {
        string name;
        int form;
        string group;
    };
void inputMas(student ps[], int &m);
void output(student stud, int m);
void outputMas(student ps[], int m);
void outputfile(student stud, int m);
void input(student &ps)
{
    string iniz;
    cout << "ФИО-"; cin >> ps.name >> iniz;
    ps.name = ps.name + " " + iniz;
    cout << "Курс-"; cin >> ps.form;
    cout << "Группа-"; cin >> ps.form;
}
void output(student stud, int m)
{
    cout << m<<" "<<stud.name<<endl;
}
int main(){
    student st[N];
    int n, i, k=0; string gr; char file[10];
    inputMas(st, n);
    cout << "Список задолжников: \n";
    outputMas(st, n);
    cout << "Учебная группа-"; cin >> gr;
    cout << "Имя вых. файла-"; cin >> file;
    fout.open(file);
    if (fout.fail()){
        cout << file << " не найден"; return 1;
    }
    for (i=0; i<n; i++) if(st[i].group==gr){
        k++; output(st[i], k); outputfile(st[i], k);
    };
    fout.close();
    cout <<"\n\nВ группе "<< gr<<" "<<k<<" задолжников\n"; 
    return 0;
}
void inputMas(student pst[], int &m){
    ifstream fin;
    char file[10];
    
}