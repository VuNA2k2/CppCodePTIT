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
    int n ;
    cin >> n;
    vector<int> a(n) , ts(1e3+7,0);
    for(int i = 0 ; i < n ;i ++)cin >> a[i];
    for(int i = 0 ; i < n ; i ++)
        if(check(a[i]))cout << a[i] << " ";

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