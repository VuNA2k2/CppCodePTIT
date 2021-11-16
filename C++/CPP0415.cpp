#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n , m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    for(int i = 0 ; i < n ; i ++)cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout << (long long)a[n-1]*b[0];
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