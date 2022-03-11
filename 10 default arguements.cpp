#include<iostream>
#include<math.h>
using namespace std;
void fun(char q,int w,long e,float a=3.14,double b=6.28)
{
    cout<<q<<"\n"<<w<<"\n"<<e<<"\n"<<a<<"\n"<<b;
}
int main()
{
    char q;
    int w;
    long e;
    float a;
    double b;
    cout<<"enter char,int, long,float,double in order";
    cin>>q>>w>>e>>a>>b;
     fun(q,w,e,a,b);
    cout<<"enter char,int, long,float in order";
    cin>>q>>w>>e>>a;
     fun(q,w,e,a);
cout<<"enter char,int, long,float in order";
    cin>>q>>w>>e;
     fun(q,w,e);
}
