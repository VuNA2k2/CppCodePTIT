#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int bsearch(vector<int> a , int l , int r , int x)
{
    if(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid]==x)return mid;
        if(a[mid]<x)bsearch(a,mid+1,r,x);
        if(a[mid]>x)bsearch(a,l,mid-1,x);
    }
    return -1;
}

void solve()
{
    int n , m;
    cin >> n >> m;
    map<int,int> check;
    vector<int> a , b;
    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        cin >> x;
        check[x]++;
        if(check[x]==1)a.push_back(x);
    }
    for(int i = 0 ; i < m ; i ++)
    {
        int x;
        cin >> x;
        if(check[x]>0)b.push_back(x);
        if(check[x]==0)a.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0 ; i < a.size() ; i ++)cout << a[i] << " ";
    cout << endl;
    for(int i = 0 ; i < b.size() ; i ++)cout << b[i] << " ";

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