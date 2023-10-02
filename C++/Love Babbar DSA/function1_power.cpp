#include<iostream>
using namespace std;
int power()
{
    int a,b;
    cin>>a>>b;
    int ans=1;
    for (int i=1;i<=b;i++)
    {
        ans*=a;
    }
    return ans;

}
int main()
{
    int a,b;
    //cin>>a>>b;
    int answer=power();
    cout<<answer<<endl;

    return 0;
}