#include <iostream>
using namespace std;
int main(){
    string text;
    cout<<"podaj text"<<endl;
    cin>>text;
    int temp=text.length(),i=0;
    while(i<(temp))
    {
        if(text[i]!=text[temp-i-1])
        {
            cout<<text<<" nie jest palidromem"<<endl;
            cout<<text[i]<<"!="<<text[temp-i-1]<<endl;
            return 0;
        }
        i++;
    }
    cout<<text<<" jest palidromem"<<endl;
    return 0;
}