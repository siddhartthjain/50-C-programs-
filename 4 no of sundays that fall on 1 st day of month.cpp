//min no of notes
#include<iostream>
using namespace std;
int chleap(int n)
{
    if(n%4==0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    enum day {mon,tue,wed,thu,fri,sat,sun};
    enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dece};
    int firstday=tue;
    int lastday;
    int i;
    int counter=0;
    for(i=1901;i<=2000;i++)
    {
        //cout<<"hello";

       for(int month=jan;month<=dece;month++)
       {
           switch(month)
           {
           case jan:
           case mar:
           case may:
           case jul:
           case aug:
           case oct:
           case dece:
            lastday=(firstday+2)%7;

            break;//break the loop within the switch not the upper loop
           case apr:
           case jun:
           case sep:
           case nov:
            lastday=(firstday+1)%7;
            break;
           case feb:
            {
                if(chleap(i)==1)
                    lastday=(firstday)%7;
                else
                    lastday=(firstday+6)%7;

            }
            break;
           }
           firstday=(lastday+1)%7;
           if(firstday==sun)
           {
               counter++;
           }

         //  month++;

       }

    }
cout<<counter;
}
