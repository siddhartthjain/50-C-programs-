#include<iostream>
using namespace std;

class solid
{enum solids {square,circle,cylinder,rectangle};
    int l,b,r,s,r1;
    int i;
    int per[4];
    public:
    void getinf()
    {

        for(int solids=square; solids<=rectangle; solids++)
        {

            switch (solids)
            {
                cout<<solids<<endl;
        case square:
            cout<<"enter side";
            cin>>s;
            break;
        case circle:
            cout<<"enter radius";
            cin>>r;
            break;
        case cylinder:
            cout<<"enter radius";
            cin>>r1;
            break;
        case rectangle:
            cout<<"enter length and breadth";
            cin>>l>>b;
            break;
            }

        }

    }
    void cal()
    {
         for(int solids=square; solids<=rectangle; solids++)
        {
            switch (solids)
            {
                 case square:
            per[0]=4*s;
            break;
        case circle:
            per[1]=2*3.14*r;
            break;
        case cylinder:
            per[2]=2*3.14*r1;
            break;
        case rectangle:
           per[3]=l*b;
           break;
            }

        }

    }
    void dis()
    {
         for(int solids=square; solids<=rectangle; solids++)
        {
            switch (solids)
            {
                 case square:
            cout<<per[0]<<endl;
            break;
        case circle:
            cout<<per[1]<<endl;
            break;
        case cylinder:
            cout<<per[2]<<endl;
            break;
        case rectangle:
          cout<<per[3]<<endl;
          break;
            }

        }

    }
};
int main()
{
    solid t1;
    t1.getinf();
    t1.cal();
    t1.dis();
}
