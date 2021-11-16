#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n , m;
    cin >> n >> m;
    vector<int> a(n+m);
    for(int i = 0; i < n + m ; i ++)cin >> a[i];
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n + m ; i++)cout << a[i] << " ";
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