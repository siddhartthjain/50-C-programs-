#include<iostream>
using namespace std;
class array
{
    int *arr;
    int *arr1;
    int n;
int t;
int i;
public:
    void makearr()
    {
        cout<<"enter the no of elements you wantr to enter";
        cin>>n;
        arr= new int[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }

    }
   /* void asc(int ar[],int x)
    {
        int temp;
        n=x;
        for(i=0;i<n-1;i++)
        {
            if(ar[i+1]<ar[i])
            {
                temp=arr[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<endl;
        }

    }*/
    void merge(array &o)
    {
        array t3;
        t3.arr=new int[n+o.n];
        t=n+o.n;
        for(i=0;i<t;i++)
        {
            if(i<n)
            {
                t3.arr[i]=arr[i];
            }
            if(i>=n)
            {
                t3.arr[i]=o.arr[i-n];
            }
        }


        int temp;
       // cout<<o.arr[]

        for(i=0;i<t-1;i++)
        {
            if(t3.arr[i+1]<t3.arr[i])
            {
                temp=t3.arr[i];
                t3.arr[i]=t3.arr[i+1];
                t3.arr[i+1]=temp;
            }
        }
        for(i=0;i<t;i++)
        {
            cout<<t3.arr[i]<<endl;
        }

    }
};
int main()
{
    array t1,t2;
    t1.makearr();
    t2.makearr();
    t1.merge(t2);
}
