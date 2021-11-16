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
    int Min=99999999,x=0;
    for(int i = 0 ; i < n-1 ; i ++)
        for(int j = i + 1 ; j < n ; j ++)
                if(abs(Min)>abs(a[i]+a[j]))
                {
                    Min=a[i]+a[j];
                }
    cout << Min;
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