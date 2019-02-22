#include<iostream>
using namespace std;
class Employee
{
   char ename[100];
   int ecode;
   public:
       void getdata()
       {
            cout<<"\nEnter the employee code:";
            cin>>ecode;
            cout<<"\nEnter the employee name:";
            cin>>ename;
       }
       void display()
       {
            cout<<"\nEmployee code:"<<ecode;
            cout<<"\nEmployee name:"<<ename;
       }
};
int main()
{
   Employee E[10];
   int n,i;
   cout<<"\nEnter the number of emplyee:";
   cin>>n;
   cout<<"\nEnter the details\n";
   for(i=0;i<n;i++)
   {
        E[i].getdata();
   }
   cout<<"\nThe details are\n";
   for(i=0;i<n;i++)
   {
        E[i].display();
   }
   return 0;
}
            
