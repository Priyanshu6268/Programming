#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Please enter amount: ";
    cin >> a;

    // Set the value for start based on some condition or user input.
    int start = 1;

    switch (start)
    {
    case 1:
        cout << (a / 100) << " 100 Rupees Notes" << endl;
        a = a % 100;
        //cout<<a<<endl;
        // Add a break statement to exit the switch block.
        

    case 2:
        cout << (a / 50) << " 50 Rupees Notes" << endl;
        a = a % 50;
        
    case 3:
        cout << (a / 20) << " 20 Rupees Notes" << endl;
        a = a % 20;
       

    default:
        cout << a << " 1 Rupee notes" << endl;
        a = a % 1;
        
    }

    return 0;
}
