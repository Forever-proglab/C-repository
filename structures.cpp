#include <iostream>
#include <math.h>
#include <string>
using namespace std;
struct student
    {
        string name;
        int form;
        string group;
    };
void input(student &ps)
{
    string iniz;
    cout << "Фамилия-"; cin >> ps.name >> iniz;
    ps.name = ps.name + " " + iniz;
    cout << "Курс-"; cin >> ps.form;
    cout << "Группа-"; cin >> ps.form;
}
void output(student stud, int m)
{
    cout << m<<" "<<stud.name<<endl;
}
int main(){
        setlocale(LC_ALL, "Russian");
    const long int N=900;
    student st[N];
    int n, i, k=0; string gr;
    cout << "Число задолжников-"; cin >> n;
    for (i=0; i<n; i++) input(st[i]); for (i=0; i<n; i++) output(st[i]);
        cout << "Число задолжников-"; cin >> n;
    cout << "Группа-"; cin >> gr;
    for (i=0; i<n; i++) if (st[i].group==gr){
        k++; output(st[i],k);
    }
    if (!k) cout << "Задолжников в группе "<<gr<<" нет"; 
        return 0;
}