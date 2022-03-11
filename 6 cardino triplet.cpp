//min no of notes
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float d,e;
    int counter=0;
    for(a=0;a<=100;a++)
    {
        for(b=0;b<=100;b++)
        {
            for(c=0;c<=100;c++)
            {
                if(a+b+c<=100)
                {
                    e=b*sqrt(c);
                    d=cbrt(a+e)+cbrt(a-e);

//                    d=pow(a+b*pow(c,0.5),0.333)+pow(a-b*pow(c,0.5),0.333);
                   if(d==1)
        {
            cout<<a<<","<<b<<","<<c<<endl;
            counter++;
        }
                }
        }
    }
}
    cout<<"total no triplets :"<<counter;
}
