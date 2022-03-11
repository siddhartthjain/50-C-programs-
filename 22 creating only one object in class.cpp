#include<iostream>
using namespace std;

class singlton
{
    static singlton*p;
public:
singlton* create()
    {
        if(p==NULL)

           {
                p=new singlton;
           // cout<<p<<endl;
           return p;
           }
        else
            {cout<<"only one object can be created";}

    }


};
singlton* singlton::p=NULL;
int main()
{
    singlton t1,t2;
    cout<<t1.create()<<endl;;
    cout<<t2.create();




}
