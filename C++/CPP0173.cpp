#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long lcm(long long a , long long b)
{
    return a*b/__gcd(a,b);
}

void solve()
{
    long long a , b , c , n;
    cin >> a>> b >> c >> n;
    long long x = lcm(a,lcm(b,c));
    if(x>=pow(10,n))cout << -1;
    else
    {
        cout << x*((long long)ceil(pow(10,n-1)/x));
    }
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