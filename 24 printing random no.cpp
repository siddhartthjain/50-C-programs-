#include<iostream>
#include<stdlib.h>//rand(),srand()
#include<time.h>//time()
using namespace std;
int main()
{
    int v1;
    int i;
    srand(time(NULL));
    v1=rand()%10;
    cout<<v1<<endl;
    for(i=0;i<10;i++)
    {
        v1=rand()%100;//no from 0 to 99
        cout<<v1<<endl;
    }

    cout<<v1;
}
