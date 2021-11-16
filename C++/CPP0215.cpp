#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n , m;
    cin >> n >> m;
    vector<int> a(n+1,0) , b(m+1,0);
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> a[i];
        a[i]+=a[i-1];
    } 
    for(int i = 1 ; i <= m ; i ++)
    {
        cin >> b[i];
        b[i]+=b[i-1];
    }
    int res = 0 ;
    for(int i = 1 ; i <= min(m,n) ; i ++)
    {
        res = max(res , max(a[i]+b[m]-b[i],b[i]+a[n]-a[i]));
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