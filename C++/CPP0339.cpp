#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    string s;
	cin>>s;
	int n=s.size(),sum=s.size();
	for(int i=0;i<n-1;i++)
    {
        for(int j = i + 1 ; j < n ; j ++)
            if(s[i]==s[j])sum++;
	}
	cout<<sum<<endl;
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