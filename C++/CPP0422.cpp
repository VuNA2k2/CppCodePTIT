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
        cin >> n;
        vector<long long> a;
        long long x;
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> x;
            if(x)a.push_back(x);
        }
        for(int i = 0 ; i < n ; i ++)
        {
            if(i<a.size())cout << a[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}
