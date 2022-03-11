#include<iostream>
#include<math.h>
using namespace std;
class test
{
    int real;
    int imag;
public:
    void getinf(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
 test operator +(test &o)
 {
     test re;
    re.real=real+o.real;


    re.imag=imag+o.imag;
cout<<re.real<<"+i"<<re.imag<<endl;;
 }
 test operator -(test &o)
 {
     test re;
    re.real=real-o.real;


    re.imag=imag-o.imag;
cout<<re.real<<"+i"<<re.imag<<endl;;
 }

 test operator *(test &o)
 {
     test re;
    re.real=real*o.real-imag*o.imag;
    re.imag=imag*o.real+real*o.imag;
cout<<re.real<<"+i"<<re.imag<<endl;;
 }
 test operator /(test &o)
 {test re;
    o.real=o.real;
    o.imag=-o.imag;
    int mod;
    mod=o.real*o.real+o.imag*o.imag;
    re.real=(real*o.real-imag*o.imag)/mod;
    re.imag=(imag*o.real+real*o.imag)/mod;

cout<<re.real<<"+i"<<re.imag<<endl;;
 }


};
int main()
{
    test t1,t2,t3;
    t1.getinf(1,1);
    //t1.disp();

    t2.getinf(1,1);
    //t2.disp();
    t3=t1/t2;
    ;

}
