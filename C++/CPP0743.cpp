#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream p(s);
    string token;
    while(p >> token)v.push_back(token);
    for(int i = v.size()-1 ; i >= 0 ; i --)
        cout << v[i] << " ";
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