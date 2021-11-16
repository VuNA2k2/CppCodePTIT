#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Student
{
    string StudentCode , Name , ClassCode ;
    double Subject1 , Subject2 , Subject3;
};

bool cmp(Student a , Student b)
{
    return a.StudentCode < b.StudentCode;
}

void Input(Student &a)
{
    cin.ignore();
    getline(cin,a.StudentCode);
    getline(cin,a.Name);
    getline(cin,a.ClassCode);
    cin >> a.Subject1 >> a.Subject2 >> a.Subject3;
}

void Output(vector<Student> ds)
{
    for(int i = 0 ; i < ds.size() ; i ++)
    {
        cout << i + 1 << " ";
        cout << ds[i].StudentCode << " ";
        cout << ds[i].Name << " ";
        cout << ds[i].ClassCode << " ";
        cout << fixed << setprecision(1) << ds[i].Subject1 << " ";
        cout << fixed << setprecision(1) << ds[i].Subject2 << " ";
        cout << fixed << setprecision(1) << ds[i].Subject3 << endl;
    }
}


void solve()
{
    int n ;
    cin >> n;
    vector<Student> ds(n);
    for(int i = 0 ; i < n ; i ++)Input(ds[i]);
    sort(ds.begin(),ds.end(),cmp);
    Output(ds);
}

int main()
{
    faster();
    solve();
}