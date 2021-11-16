#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
  //code
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n , d;
        cin >> n >> d;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)cin >> a[i];
        for(int i = d; i < n; i ++) cout << a[i] << " ";
        for(int i = 0 ; i < d ; i ++) cout << a[i] << " ";
        cout << endl;
    }
}