#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int x;
struct CPP0420
{
    int num , id;
};

bool cmp(CPP0420 a , CPP0420 b)
{
    return abs(a.num-x) < abs(b.num - x);
    if(abs(a.num-x) == abs(b.num - x)) return a.id < b . id;
}

void solve()
{
    int n ;
    cin >> n >> x;
    vector<CPP0420> a(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i].num;
        a[i].id=i;
    }
    sort(a.begin(),a.end(),cmp);
    for(int i = 0 ; i < n ; i++)cout << a[i].num << " ";
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