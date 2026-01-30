#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m1, m2, h1, h2, mx = 0, cph1 = 0, cph2 = 0;
    cin >> n >> m1 >> m2 >> h1 >> h2;
    while (n--)
    {
        int m, ans = 0;
        cin >> m;
        if (cph1 < h1) // 如果還空間可以裝
        {
            int add = min(h1 - cph1, m / (m1 * m1)); // 將水量轉成公分之外，取最小值，因為水可能比能裝的空間還多
            cph1 += add;
            ans += add;
            m -= add * m1 * m1;
        }
        if (cph2 < h2 && m) // 如果還有水要裝
        {
            int add = min(h2 - cph2, m / (m2 * m2));
            cph2 += add;
            ans += add;
            m -= add * m2 * m2;
        }
        mx = max(mx, ans); // 取水量變化最大的一次
    }
    cout << mx << '\n';
    return 0;
}