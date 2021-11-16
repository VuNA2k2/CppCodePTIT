#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n ;
    cin >> n;
    int d=0;
    for(int i = 1 ; i <= sqrt(n); i ++)
    {
        if(n%i==0)
        {
            if(i%2==0)d++;
            if((n/i)%2==0)d++;
        }
    }
    int sqrtN = sqrt(n);
    if(sqrtN*sqrtN==n&&sqrtN%2==0)d--;
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