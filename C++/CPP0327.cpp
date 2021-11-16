#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    cin >> s;
    int sum=0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        sum = (2*sum+s[i]-'0')%5;
    }
    if(sum == 0)cout << "Yes";
    else cout << "No";
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