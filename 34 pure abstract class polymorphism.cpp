#include<iostream>
using namespace std;
  class pure
  {
  public:
    virtual void show()=0;
  };
  class base:public pure
  {
  public:
      void show()
      {
           cout<<"you are in base class "<<endl;
      }

  };
  class base2:public pure
  {
  public:
      void show()
      {
           cout<<"you are in 2nd class"<<endl;
      }

  };
  int main()
  {
      pure *ptr;
      base b[5];
      base2 c[5];
      int i;
      for(i=0;i<5;i++)
      {
          ptr=&b[i];
          ptr->show();
           ptr=&c[i];
          ptr->show();

      }
  }
