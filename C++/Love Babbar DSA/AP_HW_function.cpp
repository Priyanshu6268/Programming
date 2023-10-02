#include<iostream>
using namespace std;
int AP(int a)
{
    int ans=3*a+7;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"nth term is: "<<AP(n)<<endl;
    return 0;
}