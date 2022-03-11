#include<iostream>
#include<math.h>
using namespace std;
class X
{
    int cofx[8];
    int cofa[9]={0,0,0,0,0,0,0,0,0};
    int i,j;
public:
    void entdata()
    {

        for(i=0;i<5;i++)
        { cout<<"enter coefici1ents of x^"<<i<<endl;
            cin>>cofx[i];

        }
    }
    void show()
    {
        for(i=0;i<5;i++)
        {
            cout<<cofx[i]<<endl;
        }
    }
    void mul(X &o)
    {
        X t3;
        int t;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
              t=cofx[i]*o.cofx[j];
              if(i+j==0)
              {
                  cofa[0]=cofa[0]+t;
              }
              if(i+j==1)
              {
                  cofa[1]=cofa[1]+t;
              }
              if(i+j==2)
              {
                  cofa[2]=cofa[2]+t;
              }
              if(i+j==3)
              {
                  cofa[3]=cofa[3]+t;
              }
              if(i+j==4)
              {
                  cofa[4]=cofa[4]+t;
              }
              if(i+j==5)
              {
                  cofa[5]=cofa[5]+t;
              }
              if(i+j==6)
              {
                  cofa[6]=cofa[6]+t;
              }
              if(i+j==7)
              {
                  cofa[7]=cofa[7]+t;
              }
              if(i+j==8)
              {
                  cofa[8]=cofa[8]+t;
              }
              t=0;
            }
        }
        for(i=0;i<9;i++)
        {
            cout<<"coefficient of x^"<<i<<"is:";
            cout<<cofa[i]<<endl;
        }
    }
};
int main()
{
    X p,p2;
    p.entdata();
    p2.entdata();
    p.mul(p2);
}
