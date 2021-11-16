#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int i = 1;
struct SinhVien
{
    string Name , Class;
    int code, Day , Month , Year;
    float Gpa;
    SinhVien()
    {
        code = i ++;
    }
};

bool cmp(SinhVien a , SinhVien b)
{
    return a.Gpa > b.Gpa;
}

void Format(string s)
{
    vector<string> v;
    stringstream ss(s);
    string token;
    while(ss >> token)v.push_back(token);
    for(int i = 0 ; i < v.size() ; i ++)
    {
        v[i][0]=toupper(v[i][0]);
        for(int j = 1 ; j < v[i].size() ; j ++)v[i][j]=tolower(v[i][j]);
        cout << v[i] << " ";
    }
}


void nhap(SinhVien a[]  , int n)
{
    for(int i = 0 ; i < n ; i ++)
    {
        cin.ignore();
        getline(cin , a[i].Name);
        getline(cin , a[i].Class);
        char x;
        cin >> a[i].Day >> x >> a[i].Month >> x >> a[i].Year >> a[i].Gpa;
    }
}

void sapxep(SinhVien a[] , int n )
{
    sort(a,a+n,cmp);
}

void in(SinhVien a[], int n )
{
    for(int i = 0 ; i < n ; i ++)
    {
        cout  << "B20DCCN" << setw(3) << setfill('0') << a[i].code << " " ;
        Format(a[i].Name);
        cout << a[i].Class << " " << setw(2) << setfill('0') << a[i].Day << "/" << setw(2) << setfill('0') << a[i].Month << "/" << a[i].Year << " " << fixed << setprecision(2) << a[i].Gpa << endl;
    }
}

void solve()
{
    //code
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}