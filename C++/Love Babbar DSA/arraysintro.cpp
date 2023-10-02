#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout<<"Printing the array"<<endl;
    for (int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<"Printing done"<<endl;
}
int main()
{
    int num[15];
    //cout<<"Value at 0th index"<<num[14]<<endl;
    printArray(num,15);

    int second[3]={5,7,11};
    //cout<<"Value at 2nd index"<<second[2]<<endl;
    printArray(second, 3);

    int arr[4]={1};
    //for (int i=0;i<=4;i++)
    //cout<<arr[i]<<" ";
    printArray(arr,4);

    int arrSize=sizeof(arr)/sizeof(int);
    cout<<"Size of arr is: "<<arrSize<<endl;
    
    char ch[5]={'a','b','c'};
    for(int i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }
    return 0;
}