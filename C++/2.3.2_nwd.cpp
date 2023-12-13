#include <iostream>
using namespace std;
int nwd(int number1,int number2)
{
    int temp=0;
    while(number2>1)
      {
        temp=number2;
        number2=number1%number2;
        number1=temp;
        //cout<<number2<<endl;
        
      }
  return number1;

}
int main() 
{
    int number1, number2;
    cout<<"podaj liczbę"<<endl;
    cin>>number1;
    cin>>number2;
    int n_nwd=nwd(number1,number2);
    cout<<"nwd("<<number1<<","<<number2<<")="<<n_nwd<<endl;
    cout<<"nww("<<number1<<","<<number2<<")="<<number1*number2/n_nwd<<endl;
}