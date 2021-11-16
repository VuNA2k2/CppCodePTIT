#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve()
{
  //code
}

int main()
{
  faster();
  int t;
  cin >> t;
  while(t--)
  {
    int a , m;
    cin >> a >> m;
    int ok=-1;
    for(int i = 0 ; i < m ; i ++)
    {
        if(((a%m)*(i%m))%m==1)
        {
            ok=i;
            break;
        }
    }
    cout << ok << endl;
  }
}