#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n ;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    sort(a.rbegin(),a.rend());
    int l = 0 , r = n - 1;
    for(int i = 0 ; i < n ; i +=2)b[i]=a[l++];
    for(int i = 1 ; i < n ; i +=2)b[i]=a[r--];
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