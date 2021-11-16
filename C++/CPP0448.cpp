#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n , x;
    cin >> n >> x;
    vector<int> a(n),ts((int) 1e6 + 7 , 0);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    if(ts[x])cout << ts[x];
    else cout << -1;
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