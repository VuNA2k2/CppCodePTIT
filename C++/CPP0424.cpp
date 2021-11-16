#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n , k;
    cin >> n >> k;
    vector<int> a(n*k);
    for(int i = 0 ; i < n*k ; i ++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n*k ; i ++)cout << a[i] << " ";
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