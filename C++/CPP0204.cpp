#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> IsPrime(1e6,1);
void Sang()
{
    IsPrime[0]=IsPrime[1]=0;
    for(int i = 2 ; i < 1e6 ; i ++)
    {
        if(IsPrime[i])
            for(int j = 2*i; j < 1e6 ; j += i)
                IsPrime[j]=0;
        IsPrime[i]+=IsPrime[i-1];
    }
}

void solve()
{
    int l , r;
    cin >> l >> r;
    cout << IsPrime[r] - IsPrime[l-1];
}

int main()
{
    faster();
    Sang();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}