#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n ,k ;
        cin >> n >> k;
        vector<int> a;
        for(long long i = 2 ; i <= sqrt(n); i ++)
        {
            while (n%i==0)
            {
                a.push_back(i);
                n/=i;
            }
        }
        if(n>1)a.push_back(n);
        if(k>a.size())cout << -1;
        else cout << a[k-1];
        cout << endl;
    }
    
}