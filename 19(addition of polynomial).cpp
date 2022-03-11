#include<iostream>
#include<math.h>
using namespace std;
class X
{
    int cofx4,cofx3,cofx2,cofx,cofx0;
public:
    void entdata(int a,int b,int c,int d,int e)
    {

        cofx4=a;
        cofx3=b;
        cofx2=c;
        cofx=d;
        cofx0=e;
    }
    void show()
    {
         cout<<"the polynomial is"<<cofx4<<"x^4+"<<cofx3<<"+x^3+"<<cofx2<<"+x^2+"<<cofx<<"+x+"<<cofx0<<endl;;
    }


    X add(X &o)

    {
        X t3;
        t3.cofx4=cofx4+o.cofx4;
        t3.cofx3=cofx3+o.cofx3;
        t3.cofx2=cofx2+o.cofx2;
        t3.cofx=cofx+o.cofx;
        t3.cofx0=cofx0+o.cofx0;
    return t3;
    }

};
int main()
{
    X o1,o2,o3;
    o1.entdata(7,6,5,4,3);
    o1.show();
    o2.entdata(3,4,5,6,7);
    o2.show();
    o3=o1.add(o2);
    o3.show();
}
