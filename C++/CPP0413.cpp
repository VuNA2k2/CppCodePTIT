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
    sort(a.begin(),a.end());
    int l = 0 , r = n - 1;
    while(l<r)
    {
        cout << a[r--] << " " << a[l++] << " ";
    }
    if(n%2!=0)cout << a[r];
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