#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    vector<string> v;
    for(int i = 0 ; i < n ; i ++)
    {
        getline(cin , s);
        int ok=0;
        for(int j = 0 ; j < v.size() ; j ++)
        {
            if(v[j]==s)
            {
                ok=1;
                break;
            }
        }
        if(ok==0)v.push_back(s);
    }
    cout << v.size();
}

int main()
{
    faster();
    solve();
}