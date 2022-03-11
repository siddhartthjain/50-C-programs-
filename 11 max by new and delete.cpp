#include<iostream>
#include<math.h>
using namespace std;
int maxv( int arr[],int n)
{
    int maxv=arr[0];
    int i;
    int t;
    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
          t=arr[0];
          arr[0]=arr[i];
          arr[i]=t;
        }
    }
    cout<<"the max is: "<<arr[0];
}
int main()
{
    int *arr1;
    int n;
    cout<<"enter the no of erlements ";
    cin>>n;
    arr1=new int[n];
    int i;
    cout<<"enter" <<n<<"elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    maxv(arr1,n);
    delete []arr1;
}
