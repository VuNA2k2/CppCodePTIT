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
        int n;
        cin >> n ;
        vector<int> a(n,-1);
        long long x;
        for(int i = 0 ; i < n ; i ++) 
        {
            cin >> x;
            if(x>=0&&x<n)a[x]=x;
        }
        for(int i = 0 ; i < n ; i ++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}