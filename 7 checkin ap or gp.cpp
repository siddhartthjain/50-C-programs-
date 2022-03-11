//min no of notes
#include<iostream>
#include<math.h>
using namespace std;
int ap(int arr[])
{
    int i;
    int counter=0;
    int d[2];
    for(i=0;i<2;i++)

    {
        d[i]=(arr[i]+arr[i+2])/2;
    if(d[i]==arr[1+i])
    {
        counter++;
    if(counter==2)
    {
         cout<<"its an ap"<<endl;
    }

    }
    else{cout<<"its not an ap";
        break;
    }
    }

}
int gp(int arr[])
{
    int i;
    int d[2];
    int counter=0;
    for(i=0;i<2;i++)
    {
        d[i]=sqrt(arr[i]+arr[i+2]);
        if(d[i]==arr[i+1])
        {
            counter++;
 if(counter==2)
 {
      cout<<"its an gp"<<endl;;
 }

        }
        else{cout<<"its not a gp";
        break;
        }
    }
}
int main()
{
int arr1[5];
int i;
cout<<"enter a gp or ap";
for(i=0;i<5;i++)
{
    cin>>arr1[i];
}
ap(arr1);
gp(arr1);
}
