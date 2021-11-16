#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


bool cmp(string a, string b)
{
    string tmpa = a + b;
    string tmpb = b + a;
    return tmpa > tmpb;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0 ; i < n ; i ++)
    {
        cin.ignore();
        cin >> a[i];
    }
    sort(a.begin(),a.end(),cmp);
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i];
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