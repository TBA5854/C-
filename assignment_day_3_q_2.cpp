#include<iostream>
using namespace std;
int main()
{
    char a;
    int b,c;
    cout<<"ENTER AN OPERATOR :";
    cin>>a;cout<<"ENTER NUMBERS :\n";
    cin>>b>>c;
    cout<<"FINAL ANSWER IS:";
    if(a=='+')
    {
        cout<<b+c;
    }
    if(a=='/')
    {
        cout<<b/c;
    }
    if(a=='-')
    {
        cout<<b-c;
    }
    if(a=='*')
    {
        cout<<b*c;
    }
    return 0;
}