//min no of notes
#include <iostream>
using namespace std;
int main()
{
    int notes=0;
    int amount;
    int remain=0;
    int i;
    int den[8]={2000,500,100,50,10,5,2,1};
    cout<<"enter amount";
    cin>>amount;
    for(i=0;i<8;i++)
    {
        {
        if(amount<=0)
            break;
    notes=amount/den[i];
    amount=amount%den[i];
    cout<<"denomination of" <<den[i]<<"is:"<<notes<<endl;
    remain=remain+notes;
    //notes=0;
    }}
     cout<<" minimum no of total  notes are"<<remain;
    return 0;
}
