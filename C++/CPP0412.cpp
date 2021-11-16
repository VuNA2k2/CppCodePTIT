#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),ts(3,0);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        ts[a[i]]++;
    } 
    for(int i = 0 ; i <= 2; i ++)
    {
        for(int j = 0 ; j < ts[i] ; j++)cout << i << " ";
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