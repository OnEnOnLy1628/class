#include<iostream>
using namespace std;
class Store
{
   
   public:
         int price,code;
        void input()
        {
           cout<<"\nEnter code:";
           cin>>code;
           cout<<"\nEnter price:";
           cin>>price;
        }
        void print()
        {
           cout<<"\ncodeno:"<<code
               <<"\nprice:"<<price;
        }
};
int main()
{
      Store s[10];
      int i, n,totalprice;
      cout<<"\nEnter the no of items:";
      cin>>n;
      for(i=0;i<n;i++)
      {
          s[i].input();
      }
      for(i=0;i<n;i++)
      {
          s[i].print();
          totalprice=totalprice+s[i].price;
      }
      cout<<"\nTotal price:"<<totalprice;
      return 0;
}

