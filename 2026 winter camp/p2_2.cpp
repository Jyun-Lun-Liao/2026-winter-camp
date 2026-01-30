#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, total = 0, arr[25][40];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    while (1)
    {
        bool change = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == -1)
                    continue;
                for (int k = j + 1; k < m; k++) // 檢查橫排
                {
                    if (arr[i][k] == -1)
                        continue;
                    if (arr[i][j] == arr[i][k]) // 中間沒有其他數字
                    {
                        change = false;
                        total += arr[i][k];
                        arr[i][k] = -1, arr[i][j] = -1;
                        break;
                    }
                    else // 有其他數字就無法消除
                        break;
                }

                for (int k = i + 1; k < n; k++) // 檢查直排
                {
                    if (arr[k][j] == -1)
                        continue;
                    if (arr[i][j] == arr[k][j])
                    {
                        change = false;
                        total += arr[k][j];
                        arr[k][j] = -1, arr[i][j] = -1;
                        break;
                    }
                    else
                        break;
                }
            }
        }
        if (change) // 當遍歷整個陣列找不到可以消除的數字就結束
            break;
    }

    cout << total;
}