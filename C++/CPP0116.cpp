#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int snt(int n)
{
    if(n<2)return 1;
    for(int i = 2 ; i*i<=n ; i ++)
        if(n%i==0)return i;
    return n;
}

void solve()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)cout << snt(i) << " ";
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