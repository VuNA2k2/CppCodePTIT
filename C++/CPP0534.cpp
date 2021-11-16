#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Numbers
{
    string Num;
    int Frequency;
    Numbers()
    {
        Frequency = 1;
    }
};

vector<Numbers> data;

bool cmp(Numbers a, Numbers b)
{
    while(a.Num.size()<b.Num.size())a.Num = '0' + a.Num;
    while(a.Num.size()>b.Num.size())b.Num = '0' + b.Num;
    return a.Num > b.Num;
}

bool ReversibleNumber(string s)
{
    if(s.size()<2)return false;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i]!=s[s.size()-1-i])return false;
    }
    return true;
}

void solve(string s)
{
    if(ReversibleNumber(s))
    {
        Numbers tmp;
        bool ok = false;
        for (int i = 0 ; i < data.size() ; i ++)
        {
            if(data[i].Num == s)
            {
                ok=true;
                data[i].Frequency++;
                break;
            }
        }
        if(!ok)
        {
            tmp.Num = s;
            data.push_back(tmp);
        }
    }
}

int main()
{
    faster();
    string s;
    while(cin >> s)
    {
        solve(s);
    }
    sort(data.begin(),data.end(),cmp);
    for(int i = 0 ; i < data.size() ; i ++)
        cout << data[i].Num << " " << data[i].Frequency << endl;
}