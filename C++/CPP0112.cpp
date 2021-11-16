#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    double x1 , y1 , x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(4) << sqrt((double)((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
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