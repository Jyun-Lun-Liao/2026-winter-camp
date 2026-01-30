#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, face = 0, lf = 0, x = 0, y = 0, r = 0, l = 0, t = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > x)
            face = 0;
        if (b < y)
            face = 1;
        if (a < x)
            face = 2;
        if (b > y)
            face = 3;

        int dir = (face - lf + 4) % 4; // + 4 用意是避免變成負數， % 4 是為了讓面相只有 0 到 3
        if (dir == 1)
            r++;
        if (dir == 2)
            t++;
        if (dir == 3)
            l++;
        x = a, y = b, lf = face;
    }
    cout << l << ' ' << r << ' ' << t;
    return 0;
}