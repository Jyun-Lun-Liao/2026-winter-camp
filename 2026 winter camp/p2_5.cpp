#include <bits/stdc++.h>
using namespace std;

struct boss
{
    int r, c, s, t;
    bool die = false;
};

struct smp
{
    int bomb[105][105] = {0};
    bool clear[105][105] = {false};
};

int main()
{
    int n, m, k;
    boss arr[505];
    smp mp;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i].r >> arr[i].c >> arr[i].s >> arr[i].t;
    }
    int boss_alive = k;

    while (boss_alive)
    {
        for (int i = 0; i < k; i++)
        {
            if (!arr[i].die) // 魔王還活著才進行更新位置和放炸彈
            {
                int x = arr[i].r;
                int y = arr[i].c;
                mp.bomb[x][y]++;
            }
        }
        for (int i = 0; i < k; i++) // 移動
        {
            if (!arr[i].die)
            {
                int x = arr[i].r + arr[i].s;
                int y = arr[i].c + arr[i].t;
                if (x < 0 || x >= n || y < 0 || y >= m) // 出界死亡
                {
                    arr[i].die = true;
                    boss_alive--;
                }
                else if (mp.bomb[x][y]) // 踩到炸彈死亡
                {
                    arr[i].die = true;
                    boss_alive--;
                    mp.clear[x][y] = true;
                }
                else // 成功走到新位置
                {
                    arr[i].r = x;
                    arr[i].c = y;
                }
            }
        }
        for (int i = 0; i < n; i++) // 回合結束清除炸彈
        {
            for (int j = 0; j < m; j++)
            {
                if (mp.clear[i][j])
                {
                    mp.clear[i][j] = false;
                    mp.bomb[i][j] = 0;
                }
            }
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp.bomb[i][j])
                ans++;
        }
    }
    cout << ans;
    return 0;
}