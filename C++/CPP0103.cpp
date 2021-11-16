#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    double s=0;
    for(int i = 1 ; i <= n ; i++)s += (double)1/i;
    cout << fixed << setprecision(4) << s;
}

int main()
{
    faster();
    solve();
}