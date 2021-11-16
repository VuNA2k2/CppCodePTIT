#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++)cin >> a[i];
    string check(n,'0');
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i] < a[i + 1])check[i] = '1';
    }
    int l , r;
    cin >> l >> r;
    for(int i = l ; i < r - 1 ; i ++)
    {
        if(check[i] == '0' && check[i+1] == '1')
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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