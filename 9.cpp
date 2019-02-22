#include<iostream>
using namespace std;
class Student
{
   int usn; 
   int m1,m2,m3;
   char name[100];
   int avg;
   public:
       Student()
       {
            avg=0;
       }
      void input()
      {
           cout<<"\nEnter the usn:";
           cin>>usn;
           cout<<"\nEnter the student name:";
           cin>>name;
           cout<<"\nEnter the marks:";
           cin>>m1>>m2>>m3;
      }
      void average()
      {
         
         if(m1>m3&&m2>m3)
            avg=(m1+m2)/2;
         else if(m1>m2&&m3>m2)
                  avg=(m1+m3)/2;
         else
                  avg=(m3+m2)/2;
         cout<<"\navg:"<<avg;
          
      }
      void show()
      {
          cout<<"\nusn:"<<usn
              <<"\nname:"<<name
              <<"\navg:"<<avg;
      }
};
int main()
{
    Student s[10];
    int n,i;
    cout<<"\nEnter the number of students:";
    cin>>n;
    for(i=0;i<n;i++)
    {
         s[i].input();
    }
    cout<<"\nDetails";

    for(i=0;i<n;i++)
    {
       s[i].average();  
       s[i].show();
    }
    return 0;
}

