#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    long long res = -1e18;
    for(int i = 0 ; i < n ; i ++)
    {
        long long tmp = 1;
        for(int j = i ; j < n ; j ++)
        {
            tmp *= a[j];
            res = max(res,tmp);
        }
    }
    cout << res;
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