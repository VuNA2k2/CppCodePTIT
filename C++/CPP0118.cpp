#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int check (int n)
{
    int D=0;
    for(int i = 2 ; i*i <= n ; i ++)
    {
        int d=0;
        while(n%i==0)
        {
            d++;
            if(d>1)return 0;
            n/=i;
        }
        if(d)D++;
    }
    if(n>1)D++;
    if(D!=3)return 0 ;
    return 1;
}

void solve()
{
    int n;
    cin >> n ;
    cout << check(n);
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