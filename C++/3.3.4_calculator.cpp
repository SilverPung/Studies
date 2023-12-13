#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"podaj 2 liczby: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Suma wynosi: "<<a+b<<endl;
    cout<<"Różnica wynosi: "<<a-b<<endl;
    cout<<"Iloczyn wynosi: "<<a*b<<endl;
    if(b!=0)
        cout<<"Iloraz wynosi: "<<a/b<<endl;
    else
        cout<<"Nie moża dzielić przez 0"<<endl;

}