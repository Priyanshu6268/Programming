#include<iostream>
using namespace std;
void Reverse(int arr[], int size)
{
    for(int i=size;i>0;i--)
    {
        cout<<arr[i]<<" "<<endl;
    }

}
int main()
{
    int a[5]={1,9,-2,6,5};
    cout<<"Reverse of array: "<<endl;
    Reverse(a,5);
    return 0;
}