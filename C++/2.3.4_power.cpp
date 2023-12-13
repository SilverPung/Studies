#include <iostream>
using namespace std;
int main() {
  int number,power;
  cin>>number;
  cin>>power;
  int pow=1;
  for(int i=0;i<power;i++)
    {
      
        pow*=number;
      
    }
  cout<<pow;
}
