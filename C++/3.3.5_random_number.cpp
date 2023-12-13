#include <iostream>
#include <random>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int n=rand() % 16,number,tries=0;
    while(true)
    {
        tries+=1;
        cout<<"podaj liczbę: "<<endl;
        cin>>number;
        if(number==n){
            cout<<"gratuluję udało się zajęło ci to "<<tries<<" prób"<<endl;
            break;
        }
        if(number>n){
            cout<<"Mniej"<<endl;
        }
        else{
            cout<<"Więcej"<<endl;
        }

    }
    return 0;
}