#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i ++)
        if(s[i]!=s[s.size()-1-i])
        {
            cout << "NO";
            return;
        }
    cout << "YES";
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