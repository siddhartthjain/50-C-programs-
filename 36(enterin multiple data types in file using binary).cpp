#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class employee
{
    public:
char name[20];
int age;
char dept[20];
void entdata()
{
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter dept"<<endl;
cin>>dept;
cout<< "enter age"<<endl;
cin>>age;
fflush(stdin);

}
};
int main()
{
    employee e[50];
    int i,n;
    cout<<"how many employees want to add?"<<endl;
    cin>>n  ;
    ofstream fout;
    fout.open("data",ios::binary);

for(i=0;i<n;i++)
{
     e[i].entdata();
        fout.write((char*)&e[i],sizeof(e[i]));


}
fout.close();
    ifstream fin("data",ios::binary);
    while(!fin.eof())
        for(i=0;i<n;i++)
    {
        fin.read((char*)&e[i],sizeof(e[i]));
            cout<<e[i].name<<setw(5)<<e[i].age<<setw(5)<<e[i].dept;
    cout<<"\n";
    }
    fin.close();
}
