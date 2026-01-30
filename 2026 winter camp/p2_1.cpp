#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mn = INT_MAX, mx = 0, my = 0;
    cin >> n >> m;
    int arr[n][m] = {}, visited[n][m] = {};
    int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // 方向陣列， dir[i][0] 存的是給 x 用的，dir[i][1] 存的是給 y 用的
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] < mn) // 找最小的點
                mn = arr[i][j], mx = i, my = j;
        }
    }
    visited[mx][my] = 1;
    int total = mn;
    while (1)
    {
        bool can = true;
        int bmn = INT_MAX, bx = mx, by = my;
        for (int i = 0; i < 4; i++) // 找四周最小的值
        {
            int nx = bx + dir[i][0], ny = by + dir[i][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) // 邊界判斷
            {
                if (visited[nx][ny] == 0)
                {
                    can = false;
                    if (arr[nx][ny] < bmn)
                    {
                        mx = nx, my = ny, bmn = arr[mx][my];
                    }
                }
            }
        }
        if (can) // 最新的點四周都走過了或是不能走就停止
            break;
        visited[mx][my] = 1;
        total += bmn;
    }
    cout << total;
    return 0;
}