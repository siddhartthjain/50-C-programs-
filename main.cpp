#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'twoPluses' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY grid as parameter.
 */

int twoPluses(vector<string> grid) {

   pair<int,pair<int,int>> max_ans;
   max_ans=make_pair(-1,make_pair(-1,-1));
vector<pair<int,pair<int,int>>> m;
int r=grid.size();
int c=grid[0].size();
for(int k=0;k<2;k++)
{
     max_ans=make_pair(-1,make_pair(-1,-1));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

            if(grid[i][j]=='G')
            {
                int uc=0;
                int bc=0;
                int rc=0;
                int lc=0;
                int max_c;
                int max_r;


                for(int m=i-1;m>=0;m--)
                {
                    if(grid[m][j]=='G')
                    {
                        uc++;
                    }
                    else
                    {
                        break;
                    }
                }

                for(int m=i+1;m<r;m++)
                {
                    if(grid[m][j]=='G')
                    {
                        bc++;
                    }
                    else {
                    break;
                    }
                }

                for(int m=j-1;m>=0;m--)
                {
                    if(grid[i][m]=='G')
                    {
                        lc++;
                    }
                    else {
                    break;
                    }
                }
                for(int m=j+1;m<c;m++)
                {
                    if(grid[i][m]=='G')
                    {
                        rc++;
                    }
                    else {
                    break;
                    }
                }

                if(lc==0 || uc==0 || bc==0 || rc==0)
                {
                    if(max_ans.first<=1)
                    {
                    max_ans=make_pair(1, make_pair(i,j));
                    }

                }
                else {
                max_c=min(rc,lc);
                max_r=min(uc,bc);
                max_c=min(max_c,max_r);
                if(max_ans.first<=(max_c*4)+1)
                {
                    max_ans=make_pair((max_c*4)+1, make_pair(i,j));
                }

                }






            }
        }
    }
    int x=(max_ans.first)/4;
    int cx=max_ans.second.first;
    int cy=max_ans.second.second;


    for(int m=cx-1;m>=cx-x;m--)
    {
        grid[m][cy]='B';
    }
    for(int m=cx+1;m<=cx+x;m++ )
    {
        grid[m][cy]='B';
    }
    for(int i=cy-1;i>=cy-x;i--)
    {
        grid[cx][i]='B';
    }
    for(int i=cy-1;i>=cy-x;i--)
    {
        grid[cx][i]='B';
    }
    for(int i=cy+1;i<=cy+x;i++)
    {
        grid[cx][i]='B';
    }



    cout<<max_ans.second.first<<" "<<max_ans.second.second<<endl;
    m.push_back(max_ans);

}
int ans=m[0].first*m[1].first;
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    int result = twoPluses(grid);

    cout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
