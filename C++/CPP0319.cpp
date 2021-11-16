#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n , s;
    cin >> n >> s;
    vector<int> a(n,0);
    if(s>9*n||(n>1&&s==0))cout << -1 << " " << -1;
    else
    {
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(s>9)
            {
                a[i]=9;
                s-=9;
            }
            else
            {  
                a[i]=s;
                s=0;
            }
        }
        int idx=0;
        if(a[0]==0)
        {
            a[0]++;
            for(int i = 1 ; i < n ; i ++)
                if(a[i]!=0)
                {
                    a[i]--;
                    idx=i;
                    break;
                }
        }
        for(int i = 0 ; i < n ; i++)cout << a[i];
        cout <<  " ";
        if(idx)
        {
            a[idx]++;
            a[0]--;
        }
        for(int i = n-1 ; i >=0 ; i--)cout << a[i];
    }
}

int main()
{
    faster();
    solve();
}