#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=1;
    cout<<"Please enter number which you want to check ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
        
    }
    if(flag==0||n<=1)
    cout<<"not prime"<<endl;
    else
    cout<<"prime"<<endl;
    return 0;
}