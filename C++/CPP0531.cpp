#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Point
{
    int x , y , z;
};

Point make_vector(Point a , Point b)
{
    Point AB;
    AB.x = b.x - a.x;
    AB.y = b.y - a.y;
    AB.z = b.z - a.z;
    return AB;
}


void solve()
{
    vector<Point> data(4);
    for(int i = 0 ; i < 4 ; i ++)
    {
        cin >> data[i].x >> data[i].y >> data[i].z;
    }
    Point AB , AC;
    AB = make_vector(data[1],data[0]);
    AC = make_vector(data[1],data[2]);
    Point p;
    p.x = AB.y * AC.z - AB.z * AC.y;
    p.y = AB.z * AC.x - AB.x * AC.z;
    p.z = AB.x * AC.y - AB.y * AC.x;
    int d = - (p.x*data[1].x + p.y*data[1].y + p.z*data[1].z);
    if(p.x*data[3].x + p.y*data[3].y + p.z*data[3].z + d ==0)cout << "YES";
    else cout << "NO";
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