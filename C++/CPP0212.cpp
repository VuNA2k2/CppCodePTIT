#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve()
{
    int n , x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i++)cin >> a[i];
    long long X=1;
    long long sum=0;
    for(int i = n-1 ; i >= 0 ; i --)
    {
        sum+=(a[i]*X%((long long)1e9+7))%((long long)1e9+7);
        X*=(x%((long long)1e9+7));
        X=X%((long long)1e9+7);
    }
    cout << sum%((long long)1e9+7);
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