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
        if(a[mid]<x)return Bsearch(a,mid+1,h,x);
        return Bsearch(a,l,mid-1,x);
    }
    return -1;
}
void solve()
{
    int n , x;
    cin >> n >> x;
    int idx=0, a[n];
    for(int i = 0 ; i < n ; i ++) 
    {
        cin >> a[i];
        if(a[i]>a[idx])idx=i;
    }
    int pos1=Bsearch(a,0,idx,x) , pos2=Bsearch(a,idx+1,n-1,x);
    if(pos1!=-1)cout << pos1+1;
    else if(pos2!=-1)cout <<  pos2+1;

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