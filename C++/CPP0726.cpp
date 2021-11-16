#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long process(long long a , long long b , long long c)
{
    if(a==0)return 0;
    long long x = process(a/2,b,c)%c;
    if(a%2==0)return (2*x)%c;
    else return (b%c + (2*x)%c)%c;
}

void solve()
{
    long long a , b , c;
    cin >> a >> b >> c;
    cout << process(a,b,c);
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