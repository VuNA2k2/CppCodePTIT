#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool snt(int n)
{
    if(n<2)return false;
    for(int i = 2 ; i <= sqrt(n) ; i ++)
        if(n%i==0)return false;
    return true;
}

void solve()
{
    int n ;
    string s;
    cin >> n >> s;
    vector<int> a(10,0);
    for(int i = 0 ; i < s.size() ; i ++)
    {
        int tmp = s[i]-'0';
        if(snt(tmp))a[tmp]++;
        else 
        {
            if(tmp==4)
            {
                a[2]+=2;
                a[3]+=1;
            }
            if(tmp==6)
            {
                a[3]+=1;
                a[5]+=1;
            }
            if(tmp==8)
            {
                a[2]+=3;
                a[7]+=1;
            }
            if(tmp==9)
            {
                a[3]+=2;
                a[7]+=1;
                a[2]+=1;
            }
        }
    }
    for(int i = 9 ; i > 1 ; i --)
    {
        for(int j = 0 ; j < a[i] ; j ++)
            cout << i;
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