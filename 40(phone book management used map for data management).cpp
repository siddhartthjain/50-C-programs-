#include <iostream>
#include <map>
#include<vector>
#include<string>
#include<utility>
#include<iomanip>
using namespace std;

class A
{string s1;
    long x;
public:
    map<string,long> m1;
map<string,long> ::iterator itr;
    void entdata(string s,long x)
    {
        m1.insert(pair<string,long>(s,x));
    }
    void show()
    {
        for(itr=m1.begin();itr!=m1.end();itr++)
        {
            cout<<"\n";
            cout<<"name:"<<itr->first;
            cout<<setw(10)<<setfill('-')<<"no:"<<itr->second<<"\t"<<endl;
        }
    }
    void search(long n)
    {
        for( itr=m1.begin();itr!=m1.end();itr++)
        {
            if(n==itr->second)
            {
                cout<<itr->first;
            }
        }
    }
    void search(string s)
    {
        for(itr=m1.begin();itr!=m1.end();itr++)
        {
            if(s==itr->first)
                cout<<itr->second;
        }
    }

};
int main()
{
    A o1;
    int i,n;
    string s1;
    long x;
    int q;
    mainmenu:
   {
       cout<<"\n";
        cout<<"welcome to phone book management"<<endl;
    cout<<" 1)enter data \n 2) search \n 3)show"<<endl;
    cin>>q;
   }
    switch(q)
    {
    case 1:
        forentdata:
    {
    cout<<"how many enteries?";
    cin>>n;
    for(i=0;i<n;i++)
    {
    cout<<"enter the name"<<endl;
    cin>>s1;
    cout<<"enter the no"<<endl;
    cin>>x;
    o1.entdata(s1,x);
    }
    goto mainmenu;
    }
    case 2:
         forsearch:
        {
            int a;
            cout<<"search by name(1) or no(2)"<<endl;
            cin>>a;
            if(a==1)
            {
                cout<<"enter name"<<endl;
                cin>>s1;
                o1.search(s1);
            }
            if(a==2)
            {
                cout<<"enter no"<<endl;
                cin>>x;
                o1.search(x);
            }
             goto mainmenu;
        }
    case 3:
        showdata:
        {
            o1.show();
        }
         goto mainmenu;
    }
}
