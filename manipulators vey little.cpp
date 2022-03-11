#include<iostream>
#include<iomanip>
using namespace std;
 int main()
 {
     setiosflags(ios::scientific|ios::right);
     int i=1000;
     float j=78.97808;
     char s[]="hey how are you";
     cout<<hex<<i<<endl;;
     cout<<setw(10)<<setprecision(5)<<j<<endl;;
     cout<<"\t"<<setw(20)<<setfill('$')<<s;



 }
