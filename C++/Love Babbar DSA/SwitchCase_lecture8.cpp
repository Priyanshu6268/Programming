#include <iostream>
using namespace std;
int main()
{
    int num=2;
    cout<<num<<endl;
    switch (num)
    {
    case 1:
        /* code */
        cout<<"First"<<endl;
        break;
    case 2:
        cout<<"Second"<<endl;
        break;
    
    default:
        cout<<"It is defalult case";
        
    }
    return 0;
}