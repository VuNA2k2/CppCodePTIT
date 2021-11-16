#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool snt(int n)
{
    if(n<2)return false;
    for(int i = 2 ; i*i <= n ; i++)
        if(n%i==0)return false;
    return true;
}

void solve()
{
    int n;
    cin >> n;
    if(snt(n))cout << "YES";
    else cout << "NO";
}

int main()
{
    faster();
    solve();
}