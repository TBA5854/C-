#include <iostream>
using namespace std;
class subMark{
public:
    float marks()
    {
        int m1,m2;
        cout<<"enter the first mark you got:"<<endl;
        cin>>m1;
        cout<<"enter the second mark you got:"<<endl;
        cin>>m2;
        return (m1+m2);
    }
    int roll_no()
    {
        int roll;
        cout<<"enter the roll number:"<<endl;
        cin>>roll;
        return roll;
    }
};

class sports:public subMark
{
public:
    float sports_mark()
    {
        int m3;
        cout<<"enter the sport mark you got:"<<endl;
        cin>>m3;
        return m3;
    }
    void out(float m3,float m_2,int rno)
    {
        cout<<"ROLL NO:"<<rno<<endl<<"total:"<<(m_2+m3);
    }
};
int main()
{
    sports stud;
    stud.out(stud.sports_mark(),stud.marks(),stud.roll_no());
}