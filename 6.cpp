#include<iostream>
using namespace std;
class Bank
{
   char name[100];
   int accno;
   char acctype[100];
   int balance=0,initial=0,finala;
   
   public:
        void getdata()
        {
             cout<<"\nEnter the name of the depositor:";
             cin>>name;
             cout<<"\nEnter the account number:";
             cin>>accno;
             cout<<"\nEnter the account type:";
             cin>>acctype;
             cout<<"\nEnter the total amount:";
             cin>>finala; 
             balance=finala-initial;
        }
        void deposit()
        {
           int d=0;
           cout<<"\nEnter the amount to be deposited:";
           cin>>d;
           balance=balance+d;
        }
        void withdraw()
        {
              int w=0;
              cout<<"\nEnter the amount to be withdrawn:";
              cin>>w;
              if(balance>=w)
              {
                cout<<"\nSuccessfull";
                balance=balance-w;
              }
              else
                cout<<"\nNo sufficient amount";
        }
        void display()
        {
            cout<<"\nName:"<<name;
            cout<<"\nBalance:"<<balance;
        }
};
int main()
{
    Bank b;
    b.getdata();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}
       
