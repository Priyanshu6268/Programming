#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    if(n>=65 && n<=90)
    {
        cout<<"uppercase"<<endl;
    }
    else if(n>=97&&n<=122)
    {
        cout<<"lowercase"<<endl;
    }
    else if(n>=48&&n<=57)
    {
        cout<<"numbers"<<endl;
    }
    else
    cout<<"Enter valid input"<<endl;
    return 0;
}