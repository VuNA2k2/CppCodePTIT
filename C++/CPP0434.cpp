#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n),b(n);
    for(int i = 0 ; i < n ; i++)cin >> a[i];
    b[0]=a[0]*a[1];b[n-1]=a[n-1]*a[n-2];
    for(int i = 1 ; i < n-1 ; i ++)b[i]=a[i+1]*a[i-1];
    for(int i = 0 ; i < n ; i++)cout << b[i] << " ";
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