#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    int id1=0 , id2=0 ,ok=0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i] < a[id1])
        {
            id2=id1;
            id1=i;
        } 
        else if(a[i] < a[id2])
        {
            id2=i;
        }
    }
    if(id1 == id2)cout << -1;
    else cout << a[id1] << " " << a[id2];
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
