#include<iostream>
using namespace std;
  class shape
  {
  protected:
    char a;
    int l,b;
      public:
      char getshape()
      {
          cout<<"want to make rect plate(p) or rect ring(r)"<<endl;
          cin>>a;
          cout<<"enter length and breadth"<<endl;
          cin>>l>>b;
          return a;
      }
  };
  class cost
  {
  protected:
    int cost1,cost2;
  public:
      void getcost(int area,int a)
      {
         if(a=='p')
      {
          cost1=20*area;
          cout<<cost1;
      }
      if(a=='r')
      {
          cost2=10*area;
          cout<<cost2;
      }
      }

  };
  class rectangle :public shape,public cost
  {
  protected :
  int area;
  public:
      int getarea()
      {
         if(a=='p')
    {
        area=l*b;
    }
    if(a=='r')
    {
        area=2*(l+b);
    }
    return area;
      }

  };
  int main()
  {
      char a;
      int area;
      rectangle r1;
      a=r1.getshape();
      area=r1.getarea();
      r1.getcost(area,a);
  }
