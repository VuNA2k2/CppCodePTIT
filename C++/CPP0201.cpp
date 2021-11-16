#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n) , b(n-1);
    for(int i = 0 ; i < n ; i++)cin >> a[i];
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n - 1 ; i++)b[i]=a[i+1]-a[i];
    sort(b.begin(),b.end());
    cout << b[0];
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