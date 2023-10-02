//Perform sum of even number
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,num;
    cout<<"Till which range you want to sum: "<<endl;
    cin>>n;
    int sum=0;
    while(i<=n){
        if(i%2==0)
        {
            sum=sum+i;
        }
        i+=1;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}