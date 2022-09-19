#include <iostream>
using namespace std;
int main(){
    char f;
    char r = 'r', s = 's', a='a';
    double d = 'd';
    int e, b;

    cout<<"ievadi 2 skaitlus"<<endl;
    cin>>e;
    cin>>b;
    cout<<"ievadi kadu darbibu gribi veikt( reizinasanu = r, dalisanu = d, saskaitisanu = s, atnemsana = a"<<endl;
    cin>>f;
    if (f == r){
        cout<<e*b<<endl;
    } else if (f == d){

    cout<<e/b<<endl;

    } else if (f == s){

    cout<<e+b<<endl;

    } else if (f == a){

    cout<<e-b<<endl;

    }
    }











