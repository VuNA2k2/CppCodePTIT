#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int a, x , y;
    cin >> a >> x >> y;
    int n = __gcd(x,y);
    for(int i = 1 ; i <= n ; i ++)cout << a;
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