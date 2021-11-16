#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , k;
        cin >> n >> k;
        long long a = n / k, b = n % k, s = (k * (k - 1) / 2) * a + (b * (b + 1) / 2);
		cout << s << endl;
    }
}