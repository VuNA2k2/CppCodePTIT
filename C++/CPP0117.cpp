#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int process(int n)
{
    int s=0;
    while(n)
    {
        while(n)
        {
            s+=(n%10);
            n/=10;
        }
        if(s<10)return s;
        else
        {
            n=s;
            s=0;
        }
    }
}

void solve()
{
    int n;
    cin >> n ;
    cout << process(n);
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