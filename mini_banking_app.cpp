#include<iostream>
#include<string>
#include<random>
using namespace std;
class Account
{
    private:
    int balance;
    long account_no;
    string history,f_name,l_name,mobile_no;
    public:
    Account()
    {
        cout<<"\n\tWelcome to COMEDY BANK !!!\n\n";
        account_no=1000000000 + (rand()%9000000000);
        cout<<"Enter your first name :";
        cin>>f_name;
        cout<<"Enter your last name :";
        cin>>l_name;
        cout<<"Enter your mobile number :";
        cin>>mobile_no;
        balance=0;
        history="ACCOUNT CREATED \n";
    }
    void credit()
    {
        cout<<"Enter the Amount to Credit : Rs.";
        int credit;
        cin>>credit;
        balance+=credit;
        history+="CREDITED : Rs."+to_string(credit)+"\n";
        cout<<"\nAMOUNT Rs."<<credit<<" CREDITED SUCCSESSFULLY\n";
    }
    void debit()
    {
        cout<<"Enter the Amount to Debit : Rs.";
        int debit;
        cin>>debit;
        if(balance>=debit){
        balance-=debit;
        history+="DEBITED : Rs."+to_string(debit)+"\n";
        cout<<"\nAMOUNT Rs."<<debit<<" DEBITED SUCCSESSFULLY\n";
        }
        else cout<<"INSUFFICIENT BALANCE\n";
    }
    void transfer()
    {
        int transfer,acc_no;
        cout<<"Enter the Recipient's Account Number to Transfer : ";
        cin>>acc_no;
        cout<<"Enter the Amount to Transfer : Rs.";
        cin>>transfer;
        if(balance>=transfer){
        balance-=transfer;
        history+="TRANSFERED : Rs."+to_string(transfer)+" TO ACCOUNT NUMBER :"+to_string(acc_no)+"\n";
        cout<<"\nAMOUNT Rs."<<transfer<<" TRANSFERED SUCCSESSFULLY\n";
        }
        else cout<<"INSUFFICIENT BALANCE\n";
    }
    void histry()
    {
        cout<<history;
    }
    void accout_info()
    {
    cout<<"ACCOUNT NUMBER : "<<account_no<<endl;
    cout<<"FIRST NAME : "<<f_name<<endl;
    cout<<"LAST NAME : "<<l_name<<endl;
    cout<<"BALANCE : "<<balance<<endl;
    cout<<"MOBILE NUMBER : "<<mobile_no<<endl;
    }
}usr;
void back() 
{ 
    cout<<("\nType \"back\" to go previous page\n>>"); 
    string st; 
    cin>>st; 
    if (st.compare("back")==0) 
    { 
        cout<<("\n"); 
    } 
    else 
    { 
        cout<<("Invalid input , program is exiting !!!"); 
        exit(0); 
    }
}
void end() 
{ 
    cout<<("\t\tThanks for Trying this program \n\n\t\t  A Program by TBA5854\n"); 
    exit(0); 
}
void disc() 
{
    cout<<("This Program is not a official bank program and \nThis Program supposed to work perfectly only when\nthe user follows the rules:\n1.Only enter option number\n2.Never enter a alphabet unless asked to do so\n");
}
void menu()
{
    cout<<("\n\tMenu\n\n"); 
    cout<<("Use the resources below and type 4 to start(Enter number to choose the option)\n"); 
    cout<<("1.Disclaimer\n"); 
    cout<<("2.Credit\n"); 
    cout<<("3.Debit\n"); 
    cout<<("4.Fund Transfer\n"); 
    cout<<("5.History\n");
    cout<<("6.Account Info\n");
    cout<<("7.Contact Authority\n");
    cout<<("8.Exit\n"); 
    cout<<(">>"); 
    int ch; 
    cin>>ch; 
    switch (ch) 
    { 
    case 1: 
    cout<<("\n\tDisclaimer\n\n"); 
    disc(); 
    back(); 
    menu(); 
    break; 
    case 2: 
    cout<<("\n\tCREDIT AMOUNT\n\n"); 
    usr.credit();
    back(); 
    menu(); 
    break; 
    case 3:
    cout<<("\n\tDEBIT AMOUNT\n\n"); 
    usr.debit();
    back(); 
    menu(); 
    break; 
    case 4: 
    cout<<("\n\tTRANSFER FUND\n\n"); 
    usr.transfer();
    back();
    menu();
    break; 
    case 6: 
    cout<<("\n\tACCOUNT INFO\n\n"); 
    usr.accout_info();
    back();
    menu();
    break; 
    case 7: 
    cout<<("\n\tContact\n\n"); 
    cout<<("For any querries or reporting bugs , contact TBA58584 via github or twitter\n"); 
    cout<<("www.github.com/TBA5854\n"); 
    cout<<("www.twitter.com/TBA5854\n"); 
    back(); 
    menu(); 
    break;
    case 5:
    cout<<("\n\tHISTORY\n\n"); 
    usr.histry();
    back();
    menu();
    break; 
    case 8: 
    end(); 
    default: 
    cout<<("Invalid input , program is exiting !!!"); 
    exit(0); 
    } 
}

int main()
{
    menu();
}