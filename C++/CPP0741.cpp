#include<bits/stdc++.h>
using namespace std;
long long Pow(long long x , long long n,long long p)
{
    if(n==1)return x%p;
    long long s = Pow(x,n/2,p)%p;
    if(n%2==0)return (s*s)%p;
    else return (((x*s)%p)*s)%p;
}
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        long long x , n , p;
        cin >> x >> n >> p;
        cout << Pow(x,n,p)%p << endl;
    }
}