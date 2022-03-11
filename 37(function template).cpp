#include<iostream>
using namespace std;
template<class X>
void swapy( X a ,X b)
{
    X t;
    t=a;
    a=b;
    b=t;
    cout<<a<<endl;
    cout<<b<<endl;



}
int main()
{
    int i=3,j=4;
    float m=2.3,n=3.3;
    string str1="mumbai",str2="nagpur";

swapy(i,j);
swapy(m,n);
swapy(str1,str2);
}
