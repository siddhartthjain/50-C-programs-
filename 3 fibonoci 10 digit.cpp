//min no of notes
#include <iostream>
using namespace std;
int main()
{
int a=1;
int b=1;
int result;
int i;
for(i=0;i<50;i++)
{
result=a+b;
a=b;
b=result;
if((result/1000000000)>=1)
{
    cout<<result<<endl;
    cout<<(i+3);
    break;
}


}




    return 0;
}
