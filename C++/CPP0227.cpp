#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector< vector<int> > a( n, vector<int> (n));
    for(int i = 0 ; i < n ; i ++)
        for(int j = 0 ; j < n ; j ++)cin >> a[i][j];
    for(int i = 0 ; i < n ; i ++)
            for(int j = 0 ; j < n ; j ++)
                if(i%2==0)cout << a[i][j] << " ";
                else cout << a[i][n-j-1] << " ";
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