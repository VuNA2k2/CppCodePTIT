#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    int res = -1e9;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            res = max(res,a[j] - a[i]);
        }
    }
    if(res < 0)res = -1;
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