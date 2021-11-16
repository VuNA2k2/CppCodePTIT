#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    cin.ignore();
    string s;
    cin >> s;
    int d=1;
    for(int i = 1 ; i < s.size(); i ++)
    {
        if(s[i]==s[i-1])
        {
            d++;
        }
        else 
        {
            cout << s[i-1] << d;
            d=1;
        }
    }
    cout << s[s.size()-1] << d;
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