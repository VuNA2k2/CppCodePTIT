#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n , k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    sort(a.rbegin(),a.rend());
    for(int i = 0 ; i < k ; i ++)cout << a[i] << " ";
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