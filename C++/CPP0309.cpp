#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    cin.ignore();
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream p(s);
    string token;
    while(p >> token)v.push_back(token);
    cout << v.size();
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