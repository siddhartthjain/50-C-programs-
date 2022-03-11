#include<iostream>
using namespace std;
template<class X>
class queue
{
    X *arr;
    X *arr1;
    int i,n;
public:
    queue(X arr[],int n)
    {
        this->arr=arr;
        this->n=n;
    }

        void add(X v)
        {
            if(n==5)
        {
            cout<<"the queue is full no elemnt would be added"<<endl;
        }
        arr1=arr;
            n=n+1;
            arr=new X[n];
            arr=arr1;
            arr[n-1]=v;
        }

        void pop()
        {
            int t;
             if(n==0)
        {
            cout<<"the queue is empty no elment would be deleted"<<endl;

        }
        arr1=arr;
        t=arr1[n-1];
        arr1[n-1]=arr1[0];
        arr1[0]=t;

            n=n-1;
            arr=new X[n];
            arr=arr1;
             t=arr[0];
            for(i=0;i<n;i++)
            {
               arr[i]=arr[i+1];

            }
            arr[n-1]=t;

        }
        void show()
        {
            for(i=0;i<n;i++)
            {
            cout<<arr[i]<<"\t";


        }
        cout<<"\n";
        }
    };

int main()
{
 int  n=5;
    int arr[5]={1,2,3,4,5};
    queue <int>q1(arr,n);
    q1.pop();
    q1.show();
    n=4;
   float arr1[4]={1.1,2.2,3.3,4.4};
    queue <float>q2(arr1,n);
    q2.add(5.5);
    q2.show();

}
