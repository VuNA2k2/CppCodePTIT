#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s101="ABBADCCABDCCABD" , s102="ACCABCDDBBCDDBB";


void solve()
{
    int n;
    cin >> n;
    char a[15];
    int d101 = 0 , d102 = 0;
    for(int i = 0 ; i < 15 ; i++)
    {
        cin >> a[i];
        if(a[i]==s101[i])d101++;
        if(a[i]==s102[i])d102++;
    }
    if(n==101) cout << fixed << setprecision(2) << ((double)d101/15)*10.00;
    else cout << fixed << setprecision(2) << ((double)d102/15)*10.00;
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