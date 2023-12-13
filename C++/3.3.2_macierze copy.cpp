#include <iostream>
using namespace std;
void mnozenie()
{
    int wielkosc,emp,temp=0;
    cout<<"podaj wielkosć tablicy"<<endl;
    cin>>wielkosc;
    int macierz1[wielkosc][wielkosc],macierz2[wielkosc][wielkosc],macierz3[wielkosc][wielkosc];    
    for(int i=0;i<wielkosc;i++)
    {
        for(int j=0;j<wielkosc;j++)
        {
            cout<<"podaj wartość tablicy1"<<endl;
            cin>>macierz1[i][j];
        }
    }
    for(int i=0;i<wielkosc;i++)
    {
        for(int j=0;j<wielkosc;j++)
        {
            cout<<"podaj wartość tablicy2"<<endl;
            cin>>macierz2[i][j];
        }
    }
    for (int i=0; i<wielkosc; i++)                              
    {
        for(int j=0; j<wielkosc; j++)
        {
            macierz3[i][j]=0;
            for(int n=0; n<wielkosc; n++)
            {
                macierz3[i][j]=(macierz1[i][n]*macierz2[n][j])+macierz3[i][j];
            }
        }
    }
    for (int i=0; i<wielkosc; i++)                              
    {
        cout << " |";
        for(int j=0; j<wielkosc; j++)
        {
            cout << " " << macierz3[i][j];        
        }
        cout << " |" << endl;
    }
}

void wyznacznik()
{
    int wielkosc,emp,det=0;
    cout<<"podaj wielkosć tablicy"<<endl;
    cin>>wielkosc;
    int a[wielkosc][wielkosc];    
    for(int i=0;i<wielkosc;i++)
    {
        for(int j=0;j<wielkosc;j++)
        {
            cout<<"podaj wartość tablicy1"<<endl;
            cin>>a[i][j];
        }
    }
    if(wielkosc==1)
        cout<<"wyznacznik "<<a[0][0];
    if(wielkosc==2)
        cout<<"wyznaczik "<<a[0][0]*a[1][1]-a[1][0]*a[0][1];
    if(wielkosc==3)
        {
            det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
             - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
             + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
             cout<<"wyznacznik "<<det;
        }
        

}
void transpozycja()
{
    int wielkosc,emp,det=0;
    cout<<"podaj wielkosć tablicy"<<endl;
    cin>>wielkosc;
    int a[wielkosc][wielkosc],b[wielkosc][wielkosc];    
    for(int i=0;i<wielkosc;i++)
    {
        for(int j=0;j<wielkosc;j++)
        {
            cout<<"podaj wartość tablicy1"<<endl;
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < wielkosc; i++) {
        for (int j = 0; j < wielkosc; j++) {
            b[j][i] = a[i][j];
        }
    }
    for (int i=0; i<wielkosc; i++)                              
    {
        cout << " |";
        for(int j=0; j<wielkosc; j++)
        {
            cout << " " << b[i][j];        
        }
        cout << " |" << endl;
    }
}
int main()
{
    mnozenie();
    wyznacznik();
    transpozycja();
    return 0;
}





