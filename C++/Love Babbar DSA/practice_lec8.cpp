#include<iostream>
using namespace std;
int u(int a)
{
    int ans=a*a;
    return ans;
}
int main()
{
    int a=10;
    a=u(a);
    cout<<a<<endl;
}