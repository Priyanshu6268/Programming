#include<iostream>
using namespace std;
int main()
{
    int i=1,p=1;
    int n;
    cin>>n;
    while(i<=n)
    {
        int j=1; int q=i;
        while (j<=i)
        {
            /* code */
           // cout<<n-j+1;        //TO print reverse
            // cout<<p<<" ";        //Print natural number in column
            //cout<<p;              //count
            cout<<q;
            p++;
            j++;
            q--;
        }
        cout<<endl;
        i++;
    }
}