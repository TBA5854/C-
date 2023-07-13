#include<iostream>
#include<string>
using namespace std;
class Test
{
    public:
    Test ()
    {

    cout<<"Enter a sentence :";
    string str;
    getline(cin,str);
    int space=0,vowel=0,cons=0,digit=0;
    for (int i = 0; i < str.length(); i++)
    {//list attendence dict menu
        if (str[i]=='U'||str[i]=='O'||str[i]=='I'||str[i]=='E'||str[i]=='A'||str[i]=='u'||str[i]=='o'||str[i]=='i'||str[i]=='e'||str[i]=='a')
        {
            vowel++;
        }
        else if(str[i]=='0'||str[i]=='9'||str[i]=='8'||str[i]=='7'||str[i]=='6'||str[i]=='5'||str[i]=='4'||str[i]=='3'||str[i]=='2'||str[i]=='1')
        {
            digit++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else{cons++;}
    }
    cout<<"Vowerls : "<<vowel<<endl;    
    cout<<"Consonants : "<<cons<<endl;
    cout<<"Digits : "<<digit<<endl;
    cout<<"Space : "<<space<<endl;
    }
}heloo;
int main()
{
    return 0;
}