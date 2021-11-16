#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    //code
}

struct PhanSo
{
    long long tu,mau;
};

void nhap(PhanSo & a)
{
    cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo a,PhanSo b)
{
    PhanSo s;
    s.tu = a.tu*b.mau + b.tu*a.mau;
    s.mau = a.mau*b.mau;
    long long gcd = __gcd(s.tu,s.mau);
    s.tu/=gcd;
    s.mau/=gcd;
    return s;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}


int main() 
{
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}