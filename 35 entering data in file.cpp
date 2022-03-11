#include<iostream>
#include<fstream>
//#include<string>
using namespace std;
int main()
{
char line[200];

ofstream fout("data");
//fout.open;




fout<<"hey how are you \n";
fout<<"hope you are fine";

fout.close();
ifstream fin("data");

while(!fin.eof())
 {


     fin.getline(line,20);

     cout<<line<<endl;

}


}
