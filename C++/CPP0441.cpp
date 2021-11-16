#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    int idx=-1;
    for(int i = 0 ; i < n ; i++)
        if(a[i]==x)
        {
            idx=i+1;
            break;
        }
    cout << idx;
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