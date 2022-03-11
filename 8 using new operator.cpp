//min no of notes
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   // int n;
    //cout<"enter the size of array";
    //cin>>n;
    int *arr;
    int n;
    cout<<"enter the no of elements";
    cin>>n;
    arr=new int[n];
    int i;
    //cout<<"enter "<<n<<"no of elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
