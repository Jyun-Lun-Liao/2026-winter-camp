#include <bits/stdc++.h>
using namespace std;
struct p
{
    int top = 1; // 先宣告每個元素的初始值
    int topf = 3;
    int down = 6;
    int topd = 4;
    int right = 2;
    int left = 5;
}; // 要加分號

int main()
{
    p dice[110]; // 宣告結構陣列，前面寫結構名稱 p ，後面寫陣列名字跟大小
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) // m 從 1 開始
    {
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            swap(dice[a], dice[b]);
        }
        else
        {
            if (b == -1) // 向前轉
            {
                int cnt = dice[a].top;
                dice[a].top = dice[a].topf;
                dice[a].topf = dice[a].down;
                dice[a].down = dice[a].topd;
                dice[a].topd = cnt;
            }
            if (b == -2) // 向右轉
            {
                int cnt = dice[a].top;
                dice[a].top = dice[a].left;
                dice[a].left = dice[a].down;
                dice[a].down = dice[a].right;
                dice[a].right = cnt;
            }
        }
    }
    for (int i = 1; i <= n; i++) // n 也是從 1 開始
        cout << dice[i].top << ' ';
    return 0;
}