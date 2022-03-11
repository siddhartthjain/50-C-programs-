#include<iostream>
#include<math.h>
using namespace std;
class rect
{
    int topr[2],topl[2],br[2],bl[2],i;
     int h;
        int w;
public:
    void entdata()
    {
        cout<<"enter top right cood";
        for(i=0;i<2;i++)
        {
            cin>>topr[i];
        }
                      cout<<"enter bottom left cood";
        for(i=0;i<2;i++)
        {
            cin>>bl[i];
        }

        topl[0]=bl[0];
        topl[1]=topr[1];
        br[0]=topr[0];
        br[1]=bl[1];



    }
    void showcoo()
    {
         cout<<topr[0]<<","<<topr[1]<<endl;
         cout<<topl[0]<<","<<topl[1]<<endl;
         cout<<bl[0]<<","<<bl[1]<<endl;
         cout<<br[0]<<","<<br[1]<<endl;
    }





    int height()
    {

        h=topl[1]-bl[1];
      //  cout<<h<<endl;
      return h;

    }
    int width()
    {

        w=topr[0]-topl[0];
        //cout<<w<<endl;
        return w;

    }
    int ap()
    {
        cout<<"area is :"<<h*w<<endl;
        cout<<"perimeter is:" <<2*(h+w)<<endl;
    }
    int check(int a,int b)
    {
        int counter=0;
        if(a>bl[0]&&a<br[0])
            counter++;
        if(b>bl[1]&&b<topl[1])
            counter++;
        if(counter==2)
        {
            cout<<"point is inside rectangle";
            return 1;
        }
        counter=0;
        return 0;
    }

};
int main()
{
    rect r1;
    r1.entdata();
    r1.showcoo();
    r1.height();
    r1.width();
    r1.ap();
    r1.check(1,1);

    }
