#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Bsearch(int a[], int l , int h , int x)
{
    if(l<=h)
    {
        int mid = (l+h)/2;
        if(a[mid]==x)return 1;
        if(a[mid]<x) return Bsearch(a,mid+1,h,x);
        return Bsearch(a,l,mid-1,x);
    }
    return -1;
}

void solve()
{
    int n , x;
    cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n; i++)cin >> a[i];
    sort(a,a+n);
    cout << Bsearch(a,0,n-1,x);
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