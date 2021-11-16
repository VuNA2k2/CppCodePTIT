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
    for(int i = 0 ; i < n - 1 ; i ++)
    {
        if(a[i]&&a[i+1] == a[i])
        {
            a[i]+=a[i];
            a[i+1]=0;
        }
    }
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i])cout << a[i] << " ";
    }
    for(int i = 0 ; i < n ; i ++)
    {
        if(!a[i])cout << a[i] << " ";
    }
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