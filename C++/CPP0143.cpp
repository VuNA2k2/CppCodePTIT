#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long fibo(int n)
{
    if(n<=2)return 1;
    long long f1 = 1 , f2 = 1 , fb;
    while(n > 2)
    {
        fb=f1+f2;
        f1=f2;
        f2=fb;
        n--;
    }
    return fb;
}

void solve()
{
    int n;
    cin >> n;
    cout << fibo(n);
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