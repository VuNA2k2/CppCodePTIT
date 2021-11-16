#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct PhanSo
{
    long long tu,mau;
};

void nhap(PhanSo & a)
{
    cin >> a.tu >> a.mau;
}

void rutgon(PhanSo &a)
{
    long long gcd = __gcd(a.tu,a.mau);
    a.tu/=gcd; a.mau/=gcd;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

void solve()
{
    
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}