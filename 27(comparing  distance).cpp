#include<iostream>
#include<string.h>
using namespace std;
class distanc
{
    float total;
    float m,cm;
public:
    void entdata()
    {
        cout<<"enter meter and then centimetr"<<endl;
        cin>>m>>cm;
    }
    distanc operator<(distanc & o)
    {
        distanc t;
        total=m*100+cm;
        o.total=o.m*100+o.cm;
        if(total<o.total)
        {
            cout<<"ist distance is less than 2nd distance"<<endl;
        }
        else{cout<<" 2nd is gretaer than 1st one"<<endl;}
    }
};
int main()
{
    distanc d1,d2;
    d1.entdata();
    d2.entdata();
    d1<d2;
}
