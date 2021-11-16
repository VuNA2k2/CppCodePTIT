#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    int d=0,x;
    for(int i = 0 ; i < n ; i ++)
    {
        int d1=0;
        for(int j = 0 ; j < 3 ; j ++)
        {
            cin >> x;
            if(x)d1++;
        }
        if(d1>=2)d++;
    }
    cout << d;
}

int main()
{
    faster();
    solve();
}