//min no of notes
#include<iostream>
#include<math.h>
using namespace std;
int swapcba(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b= t;
}
int main()
{
    int a=5,b=7;
    swapcba(&a,&b);
    cout<<a<<b;

    return 0;
}
