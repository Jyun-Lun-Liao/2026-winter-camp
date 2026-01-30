#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, t, arr[11][11] = {}, tim[t] = {};
    cin >> x >> y >> t;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        cin >> tim[i];
    }
    for (int k = t - 1; k >= 0; k--) // 反著操作
    {
        if (tim[k]) // 翻轉
        {
            for (int i = 0; i < x / 2; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    swap(arr[i][j], arr[x - i - 1][j]);
                }
            }
        }
        else // 旋轉
        {
            int change[11][11] = {};
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    change[i][j] = arr[i][j];
                }
            }
            swap(x, y);
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    arr[i][j] = change[j][x - i - 1];
                }
            }
        }
    }
    cout << x << ' ' << y << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (j)
                cout << ' ' << arr[i][j];
            else
                cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}