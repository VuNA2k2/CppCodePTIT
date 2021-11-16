#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >>n;
    vector<int> a(n-1);
    for(int i = 0 ; i < n-1 ; i ++) cin >> a[i];
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n-1 ; i++)
        if(a[i]!=i+1)
        {
            cout << i+1;
            break;
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