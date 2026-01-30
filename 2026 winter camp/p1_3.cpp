#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, ans = 0;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++)
    {
        int d, sumA = 0, sumB = 0;
        while (cin >> d && d)
        {
            if (d == a) // 輸入的值等於正 a 就加一
                sumA++;
            else if (d == -a) // 負 a 就減一
                sumA--;
            if (d == b)
                sumB++;
            else if (d == -b)
                sumB--;
        }
        if (sumA && sumB) // 最後檢查兩個有沒有都買
            ans++;
    }
    cout << ans;
    return 0;
}