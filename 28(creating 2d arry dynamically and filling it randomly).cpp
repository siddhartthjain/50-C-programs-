#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int **arr;
    int i,j,m,n;
    srand(time(NULL));
    cout<<"enter rowsand column";
    cin>>m>>n;
    arr=new int*[m];
    for(i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=rand()%10;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
     for(i=0;i<m;i++)
    {
        delete []arr[i];
    }
    delete []arr;


}
