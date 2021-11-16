#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n ;
    cin >> n;
    vector<int> a(n),ts(n+1,0);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        if(a[i]>=0&&a[i]<=n)ts[a[i]]++;
    }
    int ok=n+1;
    for(int i = 1 ; i <= n; i ++)
    {
        if(ts[i]==0)
        {
            ok=i;
            break;
        }
    }
    cout << ok;
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