#include<iostream>
using namespace std;
class X
{
public:

    static void show(X &o)
    {
        cout<<&o<<endl;
    }
};
int main()
{
    X t1,t2;
    X::show(t1);
    X::show(t2);
}
