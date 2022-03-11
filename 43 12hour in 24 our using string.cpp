#include<iostream>
#include<sstream>
#include<string>
using namespace std;
string chngeformat(string s1)
{


    string  s2;
    string s3;

    int no;
    stringstream ss;
    ss<<s1;
    while(!ss.eof())
    {ss>>s2;
    if(s1.at(8)=='P')
    {
        stringstream(s2)>>no;
        if(no==12)
        {

            s3="12";
        }
        else
            {
                no=no+12;
                stringstream s2;
                s2<<no;
                s3=s2.str();

            }
        s3.insert(2,s1,2,6);
        return s3;
    }
    if(s1.at(8)=='A')
    {stringstream(s2)>>no;
    if(no==12)
    {
        s3="00";
        s3.insert(2,s1,2,6);
    }
    else
        { s3.insert(0,s1,0,8);}

        return s3;
    }
    }


}
int main()
{
    string s,sf;
    getline(cin,s);
    sf=chngeformat(s);
    cout<<sf;
}
