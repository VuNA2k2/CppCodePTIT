#include<bits/stdc++.h>
using namespace std;
long long __lcm(long long a, long long b)
{
    return ((long long)a*b)/__gcd(a,b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long tmp = __lcm(1,n);
        for(long long i = 2 ; i < n ; i ++)
        {
            tmp=__lcm(tmp,i);
        }
        cout << tmp << endl;
    }
    
}