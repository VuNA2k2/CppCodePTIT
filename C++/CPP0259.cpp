#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<vector<int> > a , b , mul;
int n , m , p;
void MultiMatrix()
{
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < p ; j ++)
        {
            for(int k = 0 ; k < m ; k ++)
            {
                mul[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
}


void solve()
{
    cin >> n >> m >> p;
    a.resize( n , vector<int> (m));
    b.resize( m , vector<int> (p));
    mul.resize( n , vector<int> (p,0));
    for(int i = 0 ; i < n ; i ++)
        for(int j = 0 ; j < m ; j ++)
            cin >> a[i][j];

    for(int i = 0 ; i < m ; i ++)
        for(int j = 0 ; j < p ; j ++)
            cin >> b[i][j];

    MultiMatrix();
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < p ; j ++)
            cout << mul[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    solve();
}