#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int m , n , a , b;
    cin >> m >> n >> a >> b;
    int d=0;
    for(int i = m ; i <= n ; i ++)
        if(i%a==0||i%b==0)d++;
    cout << d;
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