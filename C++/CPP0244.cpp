#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),ts(1005,0);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }               
    sort(a.begin(),a.end());
    for(int i = 0 ;i < n ; i++)
    {
        if(ts[a[i]])
        {
            cout << a[i] << " ";
            ts[a[i]]=0;
        }
    }

}

int main()
{
    faster();
    solve();
}