#include<iostream>
using namespace std;
class matr
{
    int a[3][3];
    int i,j,k;
public:
    void getinfo()
    {
        cout<<"enter 9 elements in matrice";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }

    }
    void multi(matr &o)
    {
        matr t3;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                t3.a[i][j]=0;
                for(k=0;k<3;k++)
                {
                    t3.a[i][j]=t3.a[i][j]+a[i][k]*o.a[k][j];

                }
            }
        }
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<t3.a[i][j]<<"\t";
            }
            cout<<"\n";
        }

    }
  /*  void display()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }*/
    void transpose()
    {
        int c[3][3];
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=a[j][i];
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }

    }
};
int main()
{
    matr t1,t2,t3;
    char n;
    cout<<"multiplication(m) or transpose(t)?";
    cin>>n;
    if(n=='t')
   {
        t1.getinfo();
     t1.transpose();
   }
   if(n=='m')
   {
       t1.getinfo();
        t2.getinfo();
        t1.multi(t2);
   }
  // t1.display();

    //t2.display();

    //t3.display();


}
