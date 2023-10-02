#include<iostream>
using namespace std;
int main()
{
    int i=1,q=0;
    int n;
    cin>>n;
    while(i<=n)
    {
        int j=1; char r = 'A'+i-1;//+n-i; //char r='A';
        while (j<=n)
        {
            /* code */
            
            cout<<r++;
            q++;
            j++;
            
        }
        
        cout<<endl;
        i++;
    }
}