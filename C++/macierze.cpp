#include <iostream>
using namespace std;

int main()
{
    int wielkosc,emp,temp=0;
    cout<<"podaj wielkosć tablicy"<<endl;
    cin>>wielkosc;
    int macierz1[wielkosc][wielkosc];  
    for(int i=0;i<wielkosc;i++)
    {
        for(int j=0;j<wielkosc;j++)
        {
            cout<<"podaj wartość tablicy1"<<endl;
            cin>>macierz1[i][j];
        }
    }
    return 0;
}