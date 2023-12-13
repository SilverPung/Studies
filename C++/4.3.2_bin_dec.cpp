#include <iostream>
using namespace std;
string dec_to_bin(int number)
{
    int temp;
    string answer="";
    while (number>0)
    {
    temp=number%2;
    answer=to_string(temp)+answer;
    number/=2;
    }
    return answer;
}
int bin_to_dec(string number)
{
    int total=0,temp=1;
    for(int i=number.length();i>0;i--)
    {

        if(number[i-1]=='1')
            total+=temp;
        //cout<<total<<endl;
        temp*=2;
    }
    return total;
}
int main()
{
    string bin;
    int if_dec,dec;
    
    
    cout<<"Czy dec: 1=T;0=N"<<endl;
    cin>>if_dec;
    if (if_dec==1)
    {
        cout<<"Podaj liczbę: "<<endl;
        cin>>dec;
        cout<<dec_to_bin(dec);
    }
        
    else
    {
        cout<<"Podaj liczbę: "<<endl;
        cin>>bin;
        cout<<bin_to_dec(bin);
    }
        


    return 0;
}