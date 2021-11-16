#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    cin >> s;
    long long s1=0,s2=0;
    for(int i = 0 ; i < s.length() ; i ++)
        if(i%2==0)s1 += ( s[i] - '0' );
        else s2 += ( s[i] - '0' );
    if(abs(s2-s1)%11==0)cout << 1;
    else cout << 0;
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