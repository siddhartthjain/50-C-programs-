#include<iostream>
using namespace std;
   class A
  {
private: int a;

protected: int b;
public: int c;


  };
  class B:public A

  {
private: int i;
protected: int j;
public: int k;
  };
  class C:public B
  {
      private: int x;
protected: int y;
public: int z;

  };

int main()
  {
    A t1;
    B t2;
    C t3;
    cout<<sizeof(t1)<<endl;
    cout<<sizeof(t2)<<endl;
    cout<<sizeof(t3)<<endl;
  }
