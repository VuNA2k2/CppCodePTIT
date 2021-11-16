#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<bool> check((int)1e6+7,true);

void sang()
{
    check[0]=check[1]=false;
    for(int i = 2; i*i < 1e6 + 7 ; i ++)
        if(check[i])
            for(int j = 2*i ; j < 1e6 + 7 ; j += i)
                check[j]=false;
}
void solve()
{
    int n;
    cin >> n;
    int ok=0;
    for(int i = 2 ; i <= n ; i ++)
        if(check[i]&&check[n-i])
        {
            ok=1;
            cout << i << " " << n - i;
            break;
        }
    if(!ok)cout << -1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    sang();
    while(t--)
    {
        solve();
        cout << endl;
    }   
}