#include<iostream>
#include<math.h>
using namespace std;
class matrix
{
    int arr[3][3];
    int arrt[3][3];
    int iden[3][3];
    int aror[3][3];
    int i,j;
public:

    int mat()
    {

        cout<<"enter 9 elments";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }

    }
    int csingular()
    {
        int det;
       det=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])+arr[0][2]*(arr[2][1]*arr[1][0]-arr[2][0]*arr[1][1]);
   cout<<det<<endl;
   if(det==0)
   {
       return 1;
   }
   else
   {
       return 0;
   }
    }
    matrix transpose()
    {
        matrix o;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                o.arr[j][i]=arr[i][j];
            }
        }
        return o;
    }
    int cortha(matrix & o)
    {
        matrix t3;
        int counter=0,counter2=0;
        int k;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                t3.arr[i][j]=0;
                for(k=0;k<3;k++)
                {
                    t3.arr[i][j]=t3.arr[i][j]+arr[i][k]*o.arr[k][j];
                }
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==j)
                {
                    if(t3.arr[i][j]==1)
                        counter++;
                    else{break;}
                }
                else

                {
                    if(t3.arr[i][j]==0)
                    counter2++;
                    else
                        {break;}
                }
            }


        }
        if(counter==3&& counter2==6)
            {
                cout<<"its orthogonal";
            }
            else
                cout<<"its not";
    }
};
int main()
{
    matrix m1,m2,m3;
    m1.mat();
    m2=m1.transpose();
    m1.cortha(m2);
    if(m1.csingular()==1)
        cout<<"its singular";
    else
        cout<<"its not singular";
}
