#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
  //code
}

int main()
{
    faster();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    while(s1.find(s2)!=string::npos)
    {
        s1.erase(s1.find(s2),s2.length());
    } 
    while(s1[0]==' ')s1.erase(0,1);
    cout << s1;
}