#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    */
   /*
   for (int i=1;i<=n;i++)
   {
    for (int j=1;j<=n;j++)
    {
        cout<<n-j+1;
    }
    cout<<endl;
   }
   */
  
  /* int count=1;
  for (int i=1;i<=n;i++)
  {
    for (int j=1;j<=n;j++)
    {
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;
  } */
  /* 
  for (int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
  } */
  /* int count=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<count<<" ";
    }
    cout<<endl;
    count+=1;
  } */
  /* 
  int count=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;    
  } */
  /* int count;
  for(int i=1;i<=n;i++)
  {
    count=i;
    for(int j=1;j<=i;j++)
    {
        
        cout<<count<<" ";
        count+=1;
    }
    
    cout<<endl;    
  } */
  /* int count;
  for(int i=1;i<=n;i++)
  {
    count=i;
    for(int j=1;j<=i;j++)
    {
        
        cout<<count<<" ";
        count-=1;
    }
    
    cout<<endl;    
  } */
  /* char count='A';
  for(int i=1;i<=n;i++)
  {
    
    for(int j=1;j<=n;j++)
    {
        
        cout<<count<<" ";
        
    }
    count+=1;
    cout<<endl;    
  } */
  /* char count='A';
  for(int i=1;i<=n;i++)
  {
    
    for(int j=1;j<=n;j++)
    {
        
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;    
  } */
  
  /* for(int i=1;i<=n;i++)
  {
    
    for(int j=1;j<=n;j++)
    {
        char count='A'+i+j-2;
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;    
  } */
  /* char count='A';
  for(int i=1;i<=n;i++)
  {
    
    for(int j=1;j<=i;j++)
    {
        
        cout<<count<<" ";
        
    }
    count+=1;
    cout<<endl;    
  } */
  /* char count='A';
  for(int i=1;i<=n;i++)
  {
    
    for(int j=1;j<=i;j++)
    {
        
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;    
  } */
  /* 
  for(int i=1;i<=n;i++)
  {
    char count='A'+n-i;
    for(int j=1;j<=i;j++)
    {
        
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;    
  } */
  /* for(int i=1;i<=n;i++)
  {
    
    for(int j=1;j<=n;j++)
    {
        char count='A'-i+j;
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;    
  } */
  for (int i=1;i<=n;i++)
  {
    for (int j=1;j<=n;j++)
    {
        cout<<" "*(n-1);
    }
    cout<<endl;
  }
}