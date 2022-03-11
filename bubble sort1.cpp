#include<iostream>
using namespace std;
int main()
{

    int i,j,k;
    int arr[]={32,51,27,85,66,23,13,57};


     for (i=0;i<8;i++)
     {
         for(j=0;j<8;j++)
         {
             if(arr[i]<arr[j])
             {
                 k=arr[j];
                 arr[j]=arr[i];
                 arr[i]=k;

             }
         }
     }
      for(i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }


}
