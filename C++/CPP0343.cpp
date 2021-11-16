#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int x , d = 0 , d1 = 0 , d2 = 0 ;
    string tmp;
    getline(cin,tmp);
    stringstream ss(tmp);
    string token ;
    vector<string> v;
    while(ss >> token)
    {
        d++;
        if(token[token.size()-1]%2==1)d1++;
        else d2++;
    }
    if((d%2==0&&d2>d1)||(d%2==1&&d2<d1))cout << "YES";
    else cout << "NO";
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
        cout << endl;
    }
}