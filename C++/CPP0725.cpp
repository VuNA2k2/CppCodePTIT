#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long a[1005][1005];


void combination()
{
    for(int i = 0 ; i <= 1000 ; i ++)
    {
        for(int j = i ; j <= 1000 ; j ++)
        {
            if(i==0||i==j)a[i][j]=1;
            else a[i][j]=(a[i][j-1]%((int)1e9+7)+(a[i-1][j-1])%((int)1e9+7))%((int)1e9+7);
        }
    }
}

void solve()
{
    int n , k;
    cin >> n >> k;
    cout << a[k][n] ;
}

int main()
{
    faster();
    int t;
    cin >> t;
    combination();
    while(t--)
    {
        solve();
        cout << endl;
    }
}