#include <iostream>
using namespace std;
string dec_to_hex(int number)
{
    int temp;
    string answer="";
    //number=134;//86
    while(number>1)
    {
        temp=number%16;
        if (number==16)
        {
            answer="10"+answer;
            break;
        }
            
        switch (temp)
        {
        case 10:
            answer='A'+answer;
            break;
        case 11:
            answer='B'+answer;
            break;
        case 12:
            answer='C'+answer;
            break;
        case 13:
            answer='D'+answer;
            break;
        case 14:
            answer='E'+answer;
            break;
        case 15:
            answer='F'+answer;
            break;
        default:
            answer=to_string(temp)+answer;
            break;
        }
        
        number=number/16;
    }
    cout<<answer<<endl;
    return answer;
}
int hex_to_dec(string number)
{
    char temp;
    int answer=0,multiplier=1;
    for(int i=number.length();i>0;i--)
    {
        //cout<<i-1<<endl;
        temp=number[i-1];
        switch (temp)
        {
        case 'A':
            answer+=10*multiplier;
            break;
        case 'B':
            answer+=11*multiplier;
            break;
        case 'C':
            answer+=12*multiplier;
            break;
        case 'D':
            answer+=13*multiplier;
            break;
        case 'E':
            answer+=14*multiplier;
            break;
        case 'F':
            answer+=15*multiplier;
            break;
        default:
            answer+=(temp-48)*multiplier;
            break;
        }
        multiplier*=16;
    }
    cout<<answer<<endl;
    return answer;
}
int main()
{
    string hex;
    int if_dec,dec;
    
    
    cout<<"Czy dec: 1=T;0=N"<<endl;
    cin>>if_dec;
    if (if_dec==1)
    {
        cout<<"Podaj liczbę: "<<endl;
        cin>>dec;
        dec_to_hex(dec);
    }
        
    else
    {
        cout<<"Podaj liczbę: "<<endl;
        cin>>hex;
        hex_to_dec(hex);
    }
        


    return 0;
}
