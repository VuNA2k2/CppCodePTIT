#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    //code
}

struct ThiSinh
{
    string name , date;
    double m1 , m2 , m3 , s;
};

void nhap(ThiSinh &a)
{
    getline(cin , a.name);
    getline(cin , a.date);
    cin >> a.m1 >> a.m2 >> a.m3;
    a.s = a.m1 + a.m2 + a.m3;
}

void in(ThiSinh a)
{
    cout << a.name << " " << a.date << " " << fixed << setprecision(1) << a.s;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}