#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        int left = 1000, right = 1000;
        if (i - 1 >= 0)
            left = h[i - 1];
        if (i + 1 < n)
            right = h[i + 1];
        if (h[i] == 0) // 中心格等於 0 才要取左右格的值
            ans += min(left, right);
    }
    cout << ans;
    return 0;
}