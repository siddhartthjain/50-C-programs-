#include <iostream>
#include <vector>
#include<utility>
using namespace std;

int main()
{
    vector<pair<int,int> >v1;
v1.push_back(make_pair(1,1));
cout<<v1[0].first<<v1[0].second;


}
