#include<iostream>
using namespace std;
int n,stop=0,a[9];
void start()
{
    for(int i=1;i<=n;i++)
        cin >> a[i];
}
void Try()
{
    int i=n-1;
    while(i>0&&a[i]<a[i+1])i--;
    if(i==0) stop=1;
    else
    {
        int k=n;
        while(a[i]<a[k])k--;
        swap(a[k],a[i]);
        int c=n,r=i+1;
        while(r<c)
        {
            swap(a[c],a[r]);
            r++;c--;
        }
    }
}

void xuat()
{
    for(int i=1;i<=n;i++)
        cout<<a[i] <<"  ";
}
void slove()
{
    Try();
    xuat();
}
main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        cin>>n;
        start();
        slove();
        cout << endl;
    }
    
}