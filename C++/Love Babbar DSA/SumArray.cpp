#include<iostream>
using namespace std;
int sum(int arr[], int n)
{
    int add=0;
    for(int i=0;i<n;i++)
    {
        add+=arr[i];
    }
    return add;
}
int main()
{
    int elem[5]={2,7,1,-4,11};
    cout<<"Sum of the elements of array is: "<<sum(elem,5)<<endl;
    return 0;
}