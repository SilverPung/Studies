#include <iostream>
using namespace std;
int main(){
    const int B=30;
    int suma=0;
    for(int i=2;i<=B;i++)
    {
        suma=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                suma+=j;
        }
        if(suma==i)
            cout<<"liczba "<<i<<" jest doskonała"<<endl;
    }
    return 0;
}