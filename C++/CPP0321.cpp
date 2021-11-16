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
    while (a.size() != b.size())
    {
        a = "0" + a;
    }
    if(a>b)
    {
        string tmp = a;
        a = b;
        b = tmp;
    }
    vector<int> res(b.size());
    for(int i = b.size()-1 ; i >= 0 ; i --)
    {
        if(b[i]<a[i])
        {
            res[i] = b[i] + 10 - a[i] ;
            b[i-1]--;
        }
        else
        {
            res[i] = b[i] - a[i];
        }
    }
    for(int i = 0 ; i < res.size() ; i ++)cout << res[i];
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