#include <iostream>
int count=0;
using namespace std;
class container
{

    int x,y;
    public:
    container(int x,int y)
    {
        this->x=x;
        count++;
        cout<<"\n before y"<<count;
        this->y=y;
        count++;
        cout<<"\n"<<count;
    }
  container (container &p)
    {
       x=p.x;
        y=p.y;
    }
     void operator *(container &p)
    {
        cout<<"\n"<<p.x<<"\n"<<p.y;
    }
};
int main()
{
    container o(2,3);
    container *p;
    p=new container(99,88);
    o*(*p);
 //   cout<<"\n"<<count;
}
