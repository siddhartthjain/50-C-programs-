#include<iostream>
#include<string.h>
using namespace std;
class X
{
    int count=0;
public:
    X operator ++()
    {
        X t;
        count++;
        t.count=count;
        return t;
    }
    X operator++(int n)
    {
        X t;
        t.count=count;
        count++;

        return t;
    }
    void disp()
    {
        cout<<count<<endl;
    }
};
int main()
{
    X a,b,c;
    b=a++;
    c=++a;
    b.disp();
    c.disp();
    a.disp();
}
