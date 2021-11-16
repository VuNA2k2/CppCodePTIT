#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    cin.ignore();
    string a , b;
    cin >> a >> b;
    if(a.size()>b.size())
    {
        string tmp = a;
        a = b;
        b = tmp;
    }
    while (a.size()!=b.size())
    {
        a = "0" + a;
    }
    vector<int> res(b.size());
    for(int i = b.size()-1 ; i > 0 ; i --)
    {
        int tmp = (b[i]-'0') + (a[i] - '0');
        res[i] = tmp % 10;
        b[i-1] += tmp / 10;
    }
    res[0] = (b[0]-'0') + (a[0] - '0');
    for(int i = 0 ; i < b.size() ; i ++)cout << res[i];
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