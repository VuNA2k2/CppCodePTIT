#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    cin >> s;
    vector<int> ts(26,0);
    for(int i = 0 ; i < s.size() ; i++)ts[s[i]-'A']++;
    for(int i = 0 ; i < s.size() ; i ++)
        if(ts[s[i]-'A']==1)cout << s[i];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}