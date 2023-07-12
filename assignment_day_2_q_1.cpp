#include <iostream>
using namespace std;
int main()
{
    union ascii{
    int a;
    char b;
    }as;
    cout<<"enter the alphabet"<<endl<<">>";
    cin>>as.b;
    cout<<"youre letter ascii value is :"<<as.a<<endl;
}