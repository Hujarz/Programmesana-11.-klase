#include <iostream>
using namespace std;
int main() {
int x, y, z;
cout<<"Ievadi 3 malu garumus un programma parbaudis vai ar siem malu garumiem trijsturis eksiste"<<endl;
cin>>x;
cin>>y;
cin>>z;
if (x+y>z  &&  x+z>y  &&  z+y>x) {
    cout<<"Trijsturis sanak";



}else {

cout<<"trijsturis neeksiste";

}
return 0;
}

