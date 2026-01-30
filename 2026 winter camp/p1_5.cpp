#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mx_high = 0, high = 1, n, start, c; // 這邊要注意一下 high 要設為一，從要跳的大樓為第一棟
    cin >> n;
    cin >> start;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        if (start > c)
            high++;
        else
            mx_high = max(mx_high, high), high = 1;
        start = c;
    }
    mx_high = max(mx_high, high);
    cout << mx_high;
    return 0;
}