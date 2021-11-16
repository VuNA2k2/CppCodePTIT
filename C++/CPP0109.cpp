#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool check(int n)
{
    int N=n,d1=0,d2=0;
    while(N)
    {
        int i = N % 10;
        if(i%2) d1 ++;
        else d2 ++;
        N/=10;
    }
    return d1 == d2;
}

int Pow10(int n)
{
    if(n==1)return 10;
    int s=Pow10(n/2);
    if(n%2)return 10*s*s;
    else return s*s;
}

void solve()
{
    int n;
    cin >> n;
    int r = Pow10(n) , l = Pow10(n-1);
    int d=0;
    for(int i = l ; i < r ; i ++)
    {
        if(check(i))
        {
            cout << i << " ";
            d++;
        }
        if(d == 10)
        {
            cout << endl;
            d=0;
        }
    }
}

int main()
{
    faster();
    solve();
}