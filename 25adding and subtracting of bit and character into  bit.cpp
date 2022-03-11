#include<iostream>
#include<string.h>
using namespace std;
class bit
{
    char a;
    int z,i=0,l=0,no;
    int arr[8];
public:
    void entchar()
    {
         cout<<"enter character";
        cin>>a;
    }
    void entint()
    {
        cout<<"enter int";
        cin>>no;
    }
    void cbit()
    {
        int z=int(a);
        for(i=0;z!=0;i++)
        {
            arr[i]=z%2;
            z=z/2;
        }
        l=i;
cout<<"the character in bits is"<<endl;
        for(i=l-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }

    }
    bit inbit(bit &o)
    {
        bit t3;
        t3.no=no+o.no;
         for(i=0;t3.no!=0;i++)
        {
            t3.arr[i]=t3.no%2;
            t3.no=t3.no/2;
        }
        t3.l=i;
        cout<<"the int in bits is"<<endl;
        for(i=(t3.l)-1;i>=0;i--)
        {
            cout<<t3.arr[i]<<endl;
        }

    }
};
int main()
{
    bit t1,t2,t3;
    t1.entchar();
    t1.cbit();
    t2.entint();
    t3.entint();
    t2.inbit(t3);

}
