#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Point
{
    double x , y;
};

double Distance(Point a , Point b)
{
    return sqrt(((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)));
}

bool CheckTriangle(Point a , Point b , Point c)
{
    double A = Distance(b , c) , B = Distance(a , c) , C = Distance(a , b);
    return A + B > C && A + C > B && B + C > A;
}

double AreaOfTriangle(Point a , Point b , Point c)
{
    double A = Distance(b , c) , B = Distance(a , c) , C = Distance(a , b);
    return sqrt((A+B+C)*(A+B-C)*(A-B+C)*(B-A+C))/4;
}

double AreaOfCircle(Point a , Point b , Point c)
{
    double PI = 3.141592653589793238;
    double A = Distance(b , c) , B = Distance(a , c) , C = Distance(a , b);
    double R = A*B*C/(4*AreaOfTriangle(a,b,c));
    return PI*R*R;
}

void solve()
{
    Point a , b , c;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    if(CheckTriangle(a,b,c))
    {
        cout << fixed << setprecision(3) << AreaOfCircle(a,b,c);
    }
    else cout << "INVALID";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}