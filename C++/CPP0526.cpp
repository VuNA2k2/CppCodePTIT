#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct People
{
    string Name;
    int DayB , MonthB , YearB;
};

bool cmp(People a, People b)
{
    if(a.YearB < b.YearB)return true;
    else if(a.YearB == b.YearB)
    {
        if(a.MonthB < b.MonthB)return true;
        else if(a.MonthB == b.MonthB)
        {
            if(a.DayB < b.DayB)return true;
            else return false;
        }
        else return false;
    }
    else return false;
    
}


void Input(People &a)
{
    cin.ignore();
    cin >> a.Name;
    char x;
    cin >> a.DayB >> x >> a.MonthB >> x >> a.YearB;
}


void solve()
{
    int n ;
    cin >> n;
    vector<People> data(n);
    for(int i = 0 ; i < n ; i ++) Input(data[i]);
    sort(data.begin(),data.end(),cmp);
    cout << data[n-1].Name << endl;
    cout << data[0].Name;
}

int main()
{
    faster();
    solve();
}