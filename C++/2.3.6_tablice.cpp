#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cout<<"ilu alementowa tablica: ";
    cin>>n;
    int tab[n],total=0;
    for(int i=0;i<n;i++)
    {
        cin>>tab[i];
        total+=tab[i];
    }
    int min=tab[0],max=tab[0],diff,war=0,wariancja=0,total_numbers_divided=0,temp=0;
    double len,avg;
    len=n;
    cout<<total<<","<<n<<endl;
    avg=total/len;
    for(int i=1;i<n;i++)
    {
        if(tab[i]<min)
            min=tab[i];
        if(tab[i]>max);
            max=tab[i];
        
    }
    diff=max-min;
    cout<<"średnia: "<<avg<<endl;
    cout<<"najmniejsza wartość: "<<min<<endl;
    cout<<"największa wartość: "<<max<<endl;
    cout<<"rozrzut: "<<diff<<endl;
    cout<<"suma: "<<total<<endl;
    cout<<"liczby podzielne przez 3: ";
    for(int i=0;i<n;i++)
    {
        war+=(tab[i]-avg)*((tab[i]-avg));
        if(tab[i]%3==0)
        {
            cout<<tab[i]<<", ";
            total_numbers_divided++;
        }

    }
    cout<<endl<<"ilosć liczb podzielnych przez 3: "<<total_numbers_divided<<endl;
    wariancja=(war)/n;
    cout<<"wariancja: "<<wariancja<<endl;
    cout<<"odchylanie: "<<sqrt(wariancja)<<endl;
    cout<<"podaj wartość n by pokazać n element tablicy: "<<endl;
    cin>>temp;
    cout<<tab[temp-1];
    
}
