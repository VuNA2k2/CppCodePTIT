#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n),ts(10,0);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    for(int i = 0 ; i < n ; i ++)
    {
        while(a[i])
        {
            ts[a[i]%10]++;
            a[i]/=10;
        }
    }
    for(int i = 0 ; i < 10 ; i ++)
        if(ts[i])cout << i << " ";
    
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