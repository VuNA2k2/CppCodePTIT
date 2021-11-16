#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

class PhanSo
{
	private:
		long long tu , mau;
	public:
		PhanSo(long long tu , long long mau)
		{
			this -> tu = tu;
			this -> mau = mau;
		}
		void rutgon()
		{
			long long gcd = __gcd(tu,mau);
			tu/=gcd;
			mau/=gcd;
		}
		PhanSo operator >>()
		{
			PhanSo p;
			cin >> p.tu >> p.mau;
			return p;
		}
		PhanSo operator<<(PhanSo p)
		{
			cout << p.tu << "/" << p.mau;

		}
};

void solve()
{
    //code
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}