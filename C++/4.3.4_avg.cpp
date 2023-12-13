#include <iostream>
using namespace std;
int main(){
    int lenght,number,wage,total;
    float divider;
    cout<<"Ile chcesz podac liczb? "<<endl;
    cin>>lenght;
    for(int i=0;i<lenght;i++)
    {
        cout<<"podaj liczbę: "<<endl;
        cin>>number;
        cout<<"Podaje jej wagę: "<<endl;
        cin>>wage;
        total+=number*wage;
        divider+=wage;
    }
    cout<<"Średnia wynosi: "<<total/divider<<endl;
    return 0;
}