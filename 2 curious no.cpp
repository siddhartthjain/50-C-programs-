//find if the the is curious or not
// for eg  1! + 4! + 5! = 1 + 24 + 120 = 145.
#include <iostream>
using namespace std;
int fact(int n)
{
    int c=2;
int i;
    if(n==(1||0))
    {
        c=1;
    }


    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
  //  cout<<c<<endl;
    return c;

}
int answer(int n)
{

    int dig[5];
     int i,j;
    int test=0;
    for(i=0;i<5;i++)
    {
        if(n==0)
        {
            j=i-1;
            for(i=0;i<=j;i++)
        {
               test =test+fact(dig[i]);
        }
            break;
        }
        dig[i]=n%10;
        n=n/10;


    }

   return test;

}
int main()
{


    int no;
    int t;

for(no=1;no<=10000;no++)
    {
   t= answer(no);
        if (t==no)
    {
        cout<<no<<endl;
    }

    }

    return 0;
}
