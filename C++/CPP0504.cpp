#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    //code
}

struct SinhVien
{
    string Msv , Name , Class;
    int Day , Month , Year;
    double Gpa;
    SinhVien()
    {
        Msv = "B20DCCN001";
    }
};

void nhap(SinhVien &a)
{
    getline(cin , a.Name);
    getline(cin , a.Class);
    char x;
    cin >> a.Day >> x >> a.Month >> x >> a.Year >> a.Gpa;
}

void in(SinhVien a)
{
    cout << a.Msv << " " << a.Name << " " << a.Class << " " << setw(2) << setfill('0') << a.Day << "/" << setw(2) << setfill('0') << a.Month << "/" << a.Year << " " << fixed << setprecision(2) << a.Gpa;
}


int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}