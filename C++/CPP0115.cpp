#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n ;
        cin >> n;
        for(long long i = 2 ; i <= sqrt(n); i ++)
        {
            int d=0;
            while (n%i==0)
            {
                d++;
                n/=i;
            }
            if(d!=0) cout << i << " " << d << " ";
        }
        if(n>1)cout << n << " " << 1;
        cout << endl;
    }
    
}