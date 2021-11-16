#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool check(long long n)
{
    if(n<=3)return true;
    long long f , f1=0 , f2 = 1;
    while(f<=n)
    {
        if(f==n)return true;
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return false;
}

void solve()
{
    long long n;
    cin >> n;
    if(check(n))cout << "YES";
    else cout << "NO";
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