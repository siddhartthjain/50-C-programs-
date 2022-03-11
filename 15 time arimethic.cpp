#include<iostream>
using namespace std;
class time
{
    int h1,h2,m1,m2,s1,s2;
public:
    void mngtime(int h,int m,int s)
    {
        h1=h;
        m1=m;
        s1=s;
    }
    time  add(time &o)
    {
        time t3;
        t3.h1=h1+o.h1;
        t3.m1=m1+o.m1;
        t3.s1=s1+o.s1;
        if(t3.h1>12)
        {
            t3.h1=t3.h1%12;

        }
        if(t3.m1>=60)
        {
            t3.m1=t3.m1%60;
            t3.h1++;
        }
        if(t3.s1>=60)
        {
            t3.s1=t3.s1%60;
            t3.m1++;
        }
        return t3;

    }
    void disp()
    {
        cout<<h1<<"::"<<m1<<"::"<<s1<<endl;
    }
};
int main()
{
    int h,m,s;
    time t1,t2,t3;
    {
        cout<<"enter 1 st time";
        cin>>h>>m>>s;
        t1.mngtime(h,m,s);
    }
    {
        cout<<"enter 2 st time(- if want to subtract time)";
        cin>>h>>m>>s;
        t2.mngtime(h,m,s);
    }

    t3=t1.add(t2);
    t3.disp();
}
