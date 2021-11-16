#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int id = 1;

struct Internship
{
    string StudentCode , Name , ClassCode , Mail , Enterprise;
    int Number;
    Internship()
    {
        Number = id ++;
    }
};

bool cmp(Internship a , Internship b)
{
    return a.Name < b.Name;
}




void Input(Internship &a)
{
    getline(cin , a.StudentCode);
    getline(cin , a.Name);
    getline(cin , a.ClassCode);
    getline(cin , a.Mail);
    getline(cin , a.Enterprise);
}

void Output(vector<Internship> list)
{
    for(int i = 0 ; i < list.size() ; i ++)
    {
        cout << list[i].Number << " ";
        cout << list[i].StudentCode << " ";
        cout << list[i].Name << " ";
        cout << list[i].ClassCode << " ";
        cout << list[i].Mail << " ";
        cout << list[i].Enterprise << endl;
    }
}

void Find(vector<Internship> &ds,string EP , vector<Internship> list)
{
    for(int i = 0 ; i < list.size() ; i ++)
    {
        if(list[i].Enterprise == EP)ds.push_back(list[i]);
    }
}

void Process(vector<Internship> &X)
{
    sort(X.begin(),X.end(),cmp);
    Output(X);
}

void solve(vector<Internship> list)
{
    string EP;
    cin >> EP;
    vector<Internship> X;
    Find(X,EP,list);
    Process(X);
}

int main()
{
    faster();
    int n ;
    cin >> n;
    vector<Internship> list(n);
    cin.ignore();
    for(int i = 0 ; i < n ; i ++)Input(list[i]);
    int q;
    cin >> q;
    while(q--)
    {
        solve(list);
    }
}