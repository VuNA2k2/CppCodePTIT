#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    int k;
    getline(cin,s);
    cin >> k;
    if(s.length()>=26)
    {
        vector<int> a(26,0);
        for(int i = 0 ; i < s.length() ; i ++)
        {
            a[s[i]-'a']++;
        }
        int d=0;
        for(int i = 0 ; i < 26 ; i ++)
            if(!a[i])d++;
        if(d<=k)cout << 1;
        else cout << 0;
    }
    else cout << 0;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        solve();
        cout << endl;
    }
}