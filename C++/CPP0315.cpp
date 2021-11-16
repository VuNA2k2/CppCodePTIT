#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    cin.ignore();
    cin >> s;
    int id1 = s.size(); 
    for(int i = s.size() - 1 ; i > 0 ; i --)
    {
        if(s[i] < s[i-1])
        {
            id1 = i;
            break;
        }
    }
    if(id1 == s.size())
    {
        cout << -1;
        return;
    }
    int id2 = id1;
    for(int i = id1 + 1; i < s.size(); i ++)
    {
        if(s[i] < s[id1 - 1] && s[i] > s[id2])
        {
            id2 = i;
        }
    }
    swap(s[id1-1],s[id2]);
    if(s[0] == '0')
    {
        cout << -1;
        return;
    }
    cout << s;
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