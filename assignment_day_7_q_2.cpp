#include <iostream>
using namespace std;
class Time
{
    public:
    int sec;
    int h,m,s;
    int input()
    {
        cout<<"Enter hours , minutes and seconds respectively :";
        cin>>h>>m>>s;
        sec=h*3600+m*60+s;
    }
};
int convert(int sec)
{
    cout<<sec/3600<<":"<<(sec%3600)/60<<":"<<(sec%3600)%60<<"hi";
}
int main()
{
    Time start;
    start.input();
    Time end;
    end.input();
    cout<<"TIME DIFFERECENE:"<< convert(start.sec-end.sec)<<endl;
}