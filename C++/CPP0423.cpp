#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= k)  // duyệt xem có bn phần tử <= k 
            {
                count++;
            }
        }
        int bad = 0;
        for(int i = 0; i < count; i++) // duyệt từ đầu dãy để kiểm tra
        {
            if(a[i] > k) bad++;  // có bn phần tử > k => cần đổi chỗ số phần tử này
        }
        int ans = bad; // khởi tạo kết quả  = bad
        for(int i = 0, j = count; j < n; i++,j++)
        {
            if(a[i] > k) bad--; // Cập nhật lại giá trị cho bad khi i và j tịnh tiến
            if(a[j] > k) bad++;
            ans = min(ans,bad);
        }
        cout<< ans << endl;
    }
}