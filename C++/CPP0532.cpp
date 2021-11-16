#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Point
{
    int x ;
    int y;
};


void solve()
{
    int n;
    cin >> n;
    vector<Point> data(n);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> data[i].x >> data[i].y;
    }
    long long s = data[n-1].x*data[0].y - data[0].x*data[n-1].y ;
    for(int i = 0 ; i < n-1 ; i ++)
    {
        s+=(data[i].x*data[i+1].y-data[i+1].x*data[i].y);
    }
    s=abs(s);
    cout << fixed << setprecision(3) << (double)s/2;
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