#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool check(string s)
{
    for(int i = 0 ; i < s.size()-1 ; i++)
    {
        if(abs(s[i]-s[i+1])!=1)return false;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    if(check(s))cout << "YES";
    else cout << "NO";
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