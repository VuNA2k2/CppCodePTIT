#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), ts(1e6+5,0);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    int d=0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(ts[a[i]]>=2)
        {
            d+=ts[a[i]];
            ts[a[i]]=0;
        }
    }
    cout << d;
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