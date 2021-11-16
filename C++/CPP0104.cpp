#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    long long gt=1 , s=0;
    for(int i = 1 ; i <= n ; i ++)
    {
        gt*=i;
        s+=gt;
    }
    cout << s;
}

int main()
{
    faster();
    solve();
}