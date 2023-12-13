#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,p;
    cin>>a;
    cin>>b;
    cin>>c;
    if(c<a+b&&b<c+a&&a<a+c)
    {
        cout<<"trójkat jest poprawny"<<endl;
        p=(a+b+c)/2;
        cout<<"obwód: "<<p*2<<endl;
        cout<<"pole: "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    }
    else
    cout<<"trójkąt jest niepoprawny"<<endl;
    return 0;
}