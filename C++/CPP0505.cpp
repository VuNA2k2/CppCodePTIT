#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    //code
}

struct NhanVien
{
    string EmployeeCode , Name , Gender , Address , TaxCode ;
    int DayB , DayS , MonthB , MonthS , YearB , YearS;
    NhanVien()
    {
        EmployeeCode = "00001";
    }
};

void nhap(NhanVien &a)
{
    char x;
    getline(cin , a.Name);
    getline(cin , a.Gender);
    cin >> a.DayB >> x >> a.MonthB >> x >> a.YearB;
    cin.ignore();
    getline(cin , a.Address);
    getline(cin , a.TaxCode);
    cin >> a.DayS >> x >> a.MonthS >> x >> a.YearS;
}

void in(NhanVien a)
{
    cout << a.EmployeeCode << " ";
    cout << a.Name <<  " " ;
    cout << a.Gender << " ";
    cout << setw(2) << setfill('0') << a.DayB << "/" << setw(2) << setfill('0') << a.MonthB << "/" << setw(2) << setfill('0') << a.YearB << " ";
    cout << a.Address << " ";
    cout << a.TaxCode << " ";
    cout << setw(2) << setfill('0') << a.DayS << "/" << setw(2) << setfill('0') << a.MonthS << "/" << setw(2) << setfill('0') << a.YearS << " ";
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}