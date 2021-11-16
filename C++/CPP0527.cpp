#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Time
{
    int Second , Minute , Hour;
};

bool cmp(Time a , Time b)
{
    //return a.Hour < b.Hour || (a.Hour==b.Hour&&a.Minute<b.Minute) || (a.Hour==b.Hour&&a.Minute<b.Minute&&a.Second<b.Second);
    if(a.Hour < b.Hour)return true;
    else if(a.Hour == b.Hour)
    {
        if(a.Minute < b.Minute)return true;
        else if(a.Minute == b.Minute)
        {
            if(a.Second < b.Second)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

void Input(Time &a)
{
    cin >> a.Hour >> a.Minute >> a.Second;
}

void Output(vector<Time> ds)
{
    for(int i = 0 ; i < ds.size() ; i ++)
    {
        cout << ds[i].Hour << " " << ds[i].Minute << " " << ds[i].Second << endl;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<Time> a(n);
    for(int i = 0 ; i < n ; i ++)Input(a[i]);
    sort(a.begin(),a.end(),cmp);
    Output(a);
}

int main()
{
    faster();
    solve();
}