#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Bsearch(int a[], int l , int h , int x)
{
    if(l<=h)
    {
        int mid = (l+h)/2;
        if(a[mid]==x)return mid;
        else if(a[mid]<x) Bsearch(a,mid+1,h,x);
        Bsearch(a,l,mid-1,x);
    }
    return -1;
}

void solve()
{
    int n , k;
    cin >> n >> k;
    int a[n],ts[(int) 1e3 + 7]={};
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    sort(a,a+n);
    int d=0;
    for(int i = 0 ; i < n-1 ; i ++)
    {
        for(int j = i + 1 ; j < n ; j ++)if(a[i]+a[j]==k)d++;
    }
    cout << d;
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