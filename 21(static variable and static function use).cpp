#include<iostream>
using namespace std;

class X
{
static int counter;
    public:
    X()
    {
        counter++;

    }
      static void show()
    {

        cout<<"no of objects created:"<<counter<<endl;
    }

};
int X::counter=0;
int main()
{
   X t1,t2,t3,t4;
X::show();
}
