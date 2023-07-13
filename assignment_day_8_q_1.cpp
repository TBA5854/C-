#include<iostream>
#include<string>
using namespace std;
class Test
{
    public:
    Test()
    {
        string str;
    cout<<"Enter a sentence :";
getline(cin,str);
for (int i = str.length(); i >=0; i--)
{
    cout<<str[i];
}
    }
};
int main()
{   
    Test hi;
}