#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> a(n+1,0);
    for(int i = 1 ; i <= n ; i ++)cin >> a[i];
    for(int i = 1; i <= n ; i ++) a[i]+=a[i-1];
    while(t--)
    {
        int l , r;
        cin >> l >> r;
        cout << a[r] - a[l-1];
        cout << endl;
    }
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