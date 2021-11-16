#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool snt(long long n)
{
    if(n<2)return false;
    for(long long i = 2 ; i * i <= n ; i ++)
        if(n%i==0)return false;
    return true;
}

long long Pow(long long x , int n)
{
    if(n==0)return 1;
    long long s = Pow(x,n/2);
    if(n%2==0)return s*s;
    else return x*s*s;
}

int check(long long n)
{
    for(int i = 2 ; i < 32; i ++)
    {
        if(snt(i)&&snt(Pow(2,i)-1))
        {
            if(Pow(2,2*i)-Pow(2,i)==2*n)return 1;
        }
    }
    return 0;
}

void solve()
{
    long long n;
    cin >> n;
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