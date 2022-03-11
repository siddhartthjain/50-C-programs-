#include <bits/stdc++.h>
#include<strstream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n,q;
    string s;
    vector<string>stag;
    vector<string>atrname;
     vector<string>atrvalue;
      vector<string>etag;
      vector<string>temp;
      map<string,string>m;
      vector<string> ::iterator it;
      map<string,string>:: iterator itr;

      int i,j;
      cin>>n>>q;
      cin.ignore();

      for(i=0;i<n;i++)
      {
getline(cin,s);
          string ftag,n,v,e;

          stringstream ss(s);
          string t1;
          while(!ss.eof())
          {

          ss>>ftag;


          if(ftag[0]=='<'&&ftag[1]!='/')
          {
            size_t pos=ftag.find('>');
              string t1=ftag.substr(1,(pos-1));
          stag.push_back(t1);

          t1="";

          }
       else if(ftag[0]=='"')
        {
            size_t pos= ftag.find_last_of('"');
            t1=ftag.substr(1,(pos-1));
            atrvalue.push_back(t1);
            t1="";
        }
        else if(ftag[0]=='<'&&ftag[1]=='/')
        {
            t1=ftag.substr(2,4);
            it=find(stag.begin(),stag.end(),t1);
            stag.erase(it);

            etag.push_back(t1);
            t1="";
        }
        else if(ftag!="=")
        {
            t1=ftag;
            string temp=stag[0];

            if(stag.size()==1)
            {
                t1=temp+"~"+t1;
            }
            else
            {
             for(int j=1;j<stag.size();j++)
             {
                 temp=temp+"."+stag[j];
             }
             t1=temp+"~"+t1;
            }

            atrname.push_back(t1);
            t1="";
        }

      }

}


 for(i=0;i<atrname.size();i++)
 {
     cout<<atrname[i]<<endl;
     cout<<atrvalue[i]<<endl;
    // cout<<m[atrname[i]]<<endl;
 }


 for(i=0;i<q;i++)
 {
int counter=0;
     string s1;

     getline(cin,s1);

for(j=0;j<atrname.size();j++)
     {
if(s1==atrname[j])
{
     cout<<atrvalue[j]<<endl;

     break;
}
else
{
counter++;
if(counter==atrname.size())
{
    cout<<"Not Found!"<<endl;
    break;
}

}

     }

 }


}
