#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

long long process(string s)
{
    long long sum = 0;
    for(int i = 0 ; i < s.size(); i ++)
    {
        if(isdigit(s[i]))
        {
            sum = (sum * 10 + (s[i] - '0'));
            if(sum > 1593835472)return 0;
        }
        else return 0;
    }
    return sum;
}


void solve()
{
    ifstream f1;
    f1.open("DATA.in");
    long long sum = 0;
    while(!f1.eof())
    {
        string s;
        f1 >> s;
        sum += process(s);
    }
    cout << sum ;
    f1.close();
}

int main()
{
    //faster();
    solve();
}