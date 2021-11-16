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
    int l = 0 , r = n - 1;
    int d = 0;
    while (l <= r)
    {
        if(a[l] == a[r])
        {
            l ++;
            r --;
        }
        else if(a[l] > a[r])
        {
            d++;
            a[r-1] += a[r];
            r--;
        }
        else 
        {
            d++;
            a[l + 1] += a[l];
            l++;
        }
    }
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