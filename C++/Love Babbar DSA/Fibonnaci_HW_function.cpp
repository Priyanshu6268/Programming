#include<iostream>
using namespace std;
int Fib(int a)
{
    int b=0,c=1,d;
    cout<<b<<" "<<c;
    for(int i=1;i<=a-2;i++)
    {
        
        d=b+c;
        b=c;
        c=d;
        cout<<" "<<d;

    }
    cout<<endl;
    return d;
}
int main()
{
    int n;
    cin>>n;
    cout<<endl<<"Fibonnaci sum:"<<Fib(n)<<endl;
    return 0;
}