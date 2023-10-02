#include <iostream>
using namespace std;
string func(string str){
if (str.empty ())
return 0;
string sub = str. substr (1);
string temp = func( sub);
return temp + str[0];
}
{
int main()
string str = "hello world";
cout <‹ func (str);
return 0;
   