#include<iostream>
using namespace std;
class Employee
{
   int empno,basic,da,it,grosssal,netsal;
   char ename[100];
   public:
      
      void input()
      {
              cout<<"\nEnter the employee number:";
              cin>>empno;
              cout<<"\nEnter the employee name:";
              cin>>ename;
              cout<<"\nEnter the Basic:";
              cin>>basic;
      }
      void compute()
      {
              da=(52/100)*basic;
              grosssal=(basic+da);
              it=(30/100)*grosssal;
              netsal=grosssal-it;
              cout<<"\nNet Salary:"<<netsal;
      }
      void show()
      {
              cout<<"\nName:"<<ename;
              cout<<"\nNet Salary:"<<netsal;
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
        E[i].input();
         E[i].compute();
   }
   cout<<"\nThe details are\n";
   for(i=0;i<n;i++)
   {
       
        E[i].show();
   }
   return 0;
}
