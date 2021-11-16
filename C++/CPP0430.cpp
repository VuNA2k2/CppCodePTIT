#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n;
    cin >> n; 
    vector<int> a(n),ts((int)1e5+7,0);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    sort(a.begin(),a.end());
    int d = 0;
    for(int i = a[0]; i <= a[n-1]; i++)if(ts[i]==0)d++;
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