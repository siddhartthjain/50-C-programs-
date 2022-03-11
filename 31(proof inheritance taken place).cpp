#include<iostream>
using namespace std;
  class A
  {

      public:
        A()
        {
            cout<<"it was originally in class A"<<endl;

        }
  };
  class B:public A

  {

      public:
        B()
        {
            cout<<"it was originaaly in B"<<endl;
        }

  };
  int main()
  {
      A i;
      B j;
  }
