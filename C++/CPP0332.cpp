#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string p;
    vector<string> Final;
    while(ss>>p)Final.push_back(p);
    for(int i = 0 ; i < Final.size(); i ++)
    {
        if(Final[i].size())
        {
            for(int j = 0 ; j < Final[i].size(); j ++)
            {
                Final[i][j]=tolower(Final[i][j]);
            }
        }
    }
    cout << Final[Final.size()-1] ;
    for(int i = 0 ; i < Final.size()-1;i ++)cout << Final[i][0];
    cout << "@ptit.edu.vn";
}

int main()
{
    faster();
    solve();
}