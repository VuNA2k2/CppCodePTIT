#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n , m;
    cin >> n >> m;
    vector< vector<int> > a(n, vector<int> (m)) , b(n,vector<int> (m,0));
    for(int i = 0 ; i < n ; i ++)
        for(int j = 0 ; j < m ; j ++)cin >> a[i][j];
    for(int i = 0 ; i < n ; i ++)
        for(int j = 0 ; j < m ; j ++)
            if(a[i][j])
            {
                for(int h = 0 ; h < n ; h ++)
                    b[h][j]=1;
                for(int h = 0 ; h < m ; h ++)
                    b[i][h]=1;
            }
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)cout << b[i][j] << " ";
        cout << endl;
    }
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