//min no of notes
#include<iostream>
using namespace std;
int check(int n)
{
    int a;
    int counter=0;
    while(n!=0)
    {
        a=n%10;
        if(a!=0)
        {
            break;
        }
        else if(a==0)
        {
            counter++;
        }
        n=n/10;
    }
    return counter;


}
int main()
{
    int c=1;
    int i;
    int no;
    int g;
    cout<<"enter no";
    cin>>no;
    for(i=2;i<=no;i++)
    {
        c=c*i;
    }
   // cout<<c<<endl;
    g=check(c);
    cout<<"the no of trailing zero are:"<<g<<endl;


}
