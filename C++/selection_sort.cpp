#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y=temp;
}
int main()//tak
{
    int a[]={4,5,6,1,0,12,5,11,3};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
            swap(&a[min],&a[i]);

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}