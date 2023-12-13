#include <iostream>
using namespace std;
void merge(int *,int, int , int );
//cherwony kwadrat
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        
        mid=(low+high)/2;
        merge_sort(arr,low,mid);//rozdzienlanie w lewo
        merge_sort(arr,mid+1,high);//rozdzienlanie w prawo
        
        merge(arr,low,high,mid);//sortowanie i łączenie
    }
}
//czarny kwadrat
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
//łączenie
int main()
{
    int myarray[30], num;
    cout<<"Podaj liczbę elementów do posortowania:";
    cin>>num;
    cout<<"Podaj "<<num<<" elementów do posortowania:";
    for (int i = 0; i < num; i++) { cin>>myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    cout<<"Posortowana tablica\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
}