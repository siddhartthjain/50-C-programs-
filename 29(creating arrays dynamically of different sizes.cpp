#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int **arr;
    int j;
    srand(time(NULL));
    arr=new int*[3];
    arr[0]=new int[5];
           arr[1]=new int[4];
           arr[2]=new int[2];

                for(j=0;j<4;j++)
                    arr[0][j]=rand()%10;

                for(j=0;j<5;j++)
                    arr[1][j]=rand()%10;

               for(j=0;j<2;j++)
                {
                    arr[2][j]=rand()%10;

                }

                for(j=0;j<4;j++)
                {cout<<arr[0][j];
                    cout<<"\t";}
                    cout<<"\n";

                 for(j=0;j<5;j++)
                {
                    cout<<arr[1][j];
                    cout<<"\t";
                }
                cout<<"\n";

              for(j=0;j<2;j++)
                {
                    cout<<arr[2][j];
                    cout<<"\t";
                }
                cout<<"\n";
        }


