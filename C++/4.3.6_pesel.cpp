#include <iostream>
using namespace std;
int main(){
    string text,temp="13791379131";
    int  emp;
    cout<<"podaj pesel"<<endl;
    cin>>text;
    int total=0;
    if(text.length()!=11)
    {
        cout<<"Zła długość "<<endl;
        return 0;
    }
    for(int i=0;i<11;i++)
    {
        total+=(text[i]-'0')*((temp[i]-'0'));
        //cout<<total<<"\t"<<text[i]<<"\t"<<emp<<endl;
    }
    if(total%10==0)
        cout<<"pesel poprawny"<<endl;
    else
        cout<<"pesel niepoprawny"<<endl;
    return 0;   
}