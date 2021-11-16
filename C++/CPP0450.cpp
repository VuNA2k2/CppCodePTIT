#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool check(vector<int> a, int l , int r)
{
    for(int i = l ; i < r - 1; i ++)
        for(int j = i + 1 ; j < r ; j ++)
            if(a[i]==a[j])return false;
    return true;
}

void solve()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++)cin >> a[i];
    int ok =0;
    for(int i = 0 ; i < n - 1 ; i ++)
    {
        for(int j = i + 1 ; j < n ; j ++)
            if(a[i]==a[j]&&check(a,i,j))
            {
                cout << a[i];
                ok=1;
                break;
            }
        if(ok)break;
    }
    if(!ok)cout << -1;
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