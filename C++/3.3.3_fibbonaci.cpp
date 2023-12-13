#include <iostream>
using namespace std;
int main(){
    int wielkosc;
    cout<<"ile elementów ciągu: "<<endl;
    cin>>wielkosc;
    int fib[wielkosc];
    if (wielkosc==0)
        return 0;
    if (wielkosc==1){
        cout<<"0"<<endl;
        return 0;
        }  
   
    
        
    fib[0]=0;fib[1]=1;
    cout<<fib[0]<<"\t";
    cout<<fib[1]<<"\t";
    for(int i=2;i<wielkosc;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        cout<<fib[i]<<"\t";
        
    }
}