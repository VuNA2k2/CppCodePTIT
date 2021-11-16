#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    for(int i = 2 ; i * i <= n ; i++)
    {
        int d=0;
        while(n%i==0)
        {
            d++;
            n/=i;
        }
        if(d)cout << i << " " << d << endl;
    }
    if(n>1)cout << n << " " << 1;
}

int main()
{
    faster();
    solve();
}