#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<int> a;
vector<long long> sp(20,0);
vector<long long> res(20,0);

void process()
{
    long long l , r;
    cin >> l >> r;
    if(r > 17)r = 17;
    if(l > 17)l = 17;
    cout << sp[r] - sp[l-1];
}

int SumNum(int n)
{
    int s=0;
    while (n)
    {
        s+=(n%10);
        n/=10;
    }
    return s;
}

void SuperFibonacci(long long n)
{
    a.clear();
    sp.resize(1e6+7,0);
    a.push_back(0);
    a.push_back(1);
    sp[0]++;
    sp[1]++;
    for(int i = 2 ; i <= n ; i ++)
    {
        a.push_back(SumNum(a[a.size()-1])+SumNum(a[a.size()-2]));
        sp[a[a.size()-1]]++;
    }
    for(int i = 1 ; i <= 17 ; i ++ )sp[i]+=sp[i-1];
}

void solve()
{
    long long n;
    cin >> n;
    SuperFibonacci(n);
    int t;
    cin >> t;
    while(t--)
    {
        process();
        cout << endl;
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