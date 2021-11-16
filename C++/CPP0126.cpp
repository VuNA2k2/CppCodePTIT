#include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{
    if(n<2)return false;
    for(int i = 2 ; i*i <= n ; i ++)if(n%i==0)return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin >> a >> b;
        for(int i = a ; i <= b ; i ++ )
            if(snt(i))cout << i << " " ;
        cout << endl;
    }
    
}