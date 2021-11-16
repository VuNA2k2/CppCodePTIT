#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    //code
}
int id=1;
struct NhanVien
{
    string Name , Gender , Address , TaxCode ;
    int EmployeeCode , DayB , DayS , MonthB , MonthS , YearB , YearS;
    NhanVien()
    {
        EmployeeCode = id++;
    }
};

bool cmp(NhanVien a , NhanVien b)
{
    if(a.YearB < b.YearB)return true;
    else if( a.YearB == b.YearB )
    {
        if(a.MonthB < b.MonthB)return true;
        else if( a.MonthB == b.MonthB )
        {
            if(a.DayB < b.DayB)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

void nhap(NhanVien &a)
{
    char x;
    cin.ignore();
    getline(cin , a.Name);
    getline(cin , a.Gender);
    cin >> a.MonthB >> x >> a.DayB >> x >> a.YearB;
    cin.ignore();
    getline(cin , a.Address);
    getline(cin , a.TaxCode);
    cin >> a.DayS >> x >> a.MonthS >> x >> a.YearS;
}

void sapxep(NhanVien ds[] , int n)
{
    sort(ds,ds+n,cmp);
}

void inds(NhanVien ds[],int n)
{
    for(int i = 0 ; i < n ; i ++)
    {
        NhanVien a = ds[i];
        cout << setw(5) << setfill('0') << a.EmployeeCode << " ";
        cout << a.Name <<  " " ;
        cout << a.Gender << " ";
        cout << setw(2) << setfill('0') << a.MonthB << "/" << setw(2) << setfill('0') << a.DayB << "/" << setw(2) << setfill('0') << a.YearB << " ";
        cout << a.Address << " ";
        cout << a.TaxCode << " ";
        cout << setw(2) << setfill('0') << a.DayS << "/" << setw(2) << setfill('0') << a.MonthS << "/" << setw(2) << setfill('0') << a.YearS << " ";
        cout << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}