#include <iostream>
using namespace std;
unsigned long long int rekurencja(int number)
{
    if (number==2)
        return 2;
    return number*rekurencja((number-1));
}
unsigned long long int iteracja(int number)  
{
  long long int silnia=1;
  for(int i=2;i<=number;i++)
    silnia*=i;

  return silnia;
}
int main() {
  int number;
  cout<<"podaj liczbę: ";
  cin>>number;
  if(number==0)
  {
    cout<<"silnia 0 wynosi 1"<<endl;
  }
  else
  {
    cout<<"silnia "<<number<<"wynosi (iteracujnie): "<<iteracja(number)<<endl;
    cout<<"silnia "<<number<<"wynosi (rekurencja): "<<rekurencja(number)<<endl;
  }
  return 0;
  }
  
