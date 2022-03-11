#include<iostream>
using namespace std;
    class X
    {


    public:
          int   count;
        X()
        {
            count=0;
        }
        void operator ++()
        {
            count++;

        }
        void disp()
        {
            cout<<count<<endl;
        }

    };
    class X1:public X
    {
        public:
        void operator --()
        {
            count--;
        }


    };
    int main()
    {

        X1 i;
        X j;
        ++i;
i.disp();
        --i;
       i.disp();

    }
