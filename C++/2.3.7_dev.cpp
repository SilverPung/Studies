#include <iostream>
#include <cmath>
using namespace std;

void liniowa()
{
  int a, b;
  cout<<"a= ";
  cin>>a;
  cout<<"b= ";
  cin>>b;
  if(a==0)
    if(b==0)
      cout<<"Równanie tożsamościowe";
    else
      cout<<"Równanie sprzeczne";
  else{
    float x;
    x=-b/a;
    cout<<"x = "<<x;
  };
}
int kwadratowa()
{
    double a, b, c, delta, x1, x2;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    delta=b*b-(4*a*c);
    if(delta<0)
    {
        cout << "Rownanie nie ma rozwiazania";
        return 0;
    }
    if(delta==0)
    {
        cout<<"x_0 = "<<-b/( 2 * a );
        return 0;
    }
    delta=sqrt(delta);
    if(b>0)
    {
        x1=(-b-delta)/(2*a);
        x2=c/(a*x1);
    }
    else
    {
        x2=(-b+delta)/(2*a);
        x1=c/(a*x2);
    }
    cout<<"x_1="<<x1<<"x_2="<<x2;
  return 0;
}


int main()
{
    cout<<"funkcja liniowa"<<endl;
    //liniowa();
    cout<<"funkcja kwadratowa"<<endl;
    kwadratowa();
    return 0;
}