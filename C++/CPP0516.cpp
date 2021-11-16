#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int i = 1;

struct Product
{
    int CodeProduction;
    string NameProduct , Group ;
    double Sell , Buy , Profit ;
    Product()
    {
        CodeProduction = i ++;
    }
};

bool cmp(Product a , Product b)
{
    return a.Profit > b.Profit;
}

void solve()
{
    int n;
    cin >> n;
    vector<Product> a(n);
    for(int i = 0 ; i < n ; i ++)
    {
        cin.ignore();
        getline(cin , a[i].NameProduct);
        getline(cin , a[i].Group);
        cin >> a[i].Buy;
        cin >> a[i].Sell;
        a[i].Profit = a[i].Sell - a[i].Buy;
    }
    sort(a.begin(),a.end(),cmp);
    for(int i = 0 ; i < n ; i ++)
    {
        cout << a[i].CodeProduction << " ";
        cout << a[i].NameProduct << " ";
        cout << a[i].Group << " ";
        cout << fixed << setprecision(2) << a[i].Profit << endl;
    }
}

int main()
{
    faster();
    solve();
}