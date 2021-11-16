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
            Final[i][0]=toupper(Final[i][0]);
            for(int j = 1 ; j < Final[i].size(); j ++)
            {
                Final[i][j]=tolower(Final[i][j]);
            }
        }
    }
    Final[Final.size()-2].push_back(',');
    for(int i = 0 ; i < Final[Final.size()-1].size() ; i ++)
        Final[Final.size()-1][i]=toupper(Final[Final.size()-1][i]);
    for(int i = 0 ; i < Final.size() ; i ++)
        cout << Final[i] << " ";
}

int main()
{
    faster();
    solve();
}