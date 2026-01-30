#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sumA = 0, sumB = 0;
    for (int i = 0; i < 2; i++) // 這層迴圈的用意是有兩場要進行統計
    {
        int totalA = 0, totalB = 0, c = 0;
        for (int j = 0; j < 4; j++) // 統計該場的主隊四局分數
        {
            cin >> c;
            totalA += c;
        }
        for (int j = 0; j < 4; j++) // 統計該場的客隊四局分數
        {
            cin >> c;
            totalB += c;
        }
        if (totalA > totalB) // 如果主隊分數比客隊分數高就將主隊勝場加一
            sumA++;
        if (totalA < totalB) // 如果客隊分數比客隊分數高就將客隊勝場加一
            sumB++;
        cout << totalA << ':' << totalB << endl;
    }
    if (sumA > sumB) // 最後比較哪隊的勝場多，主隊贏
        cout << "Win";
    else if (sumA < sumB) // 主隊輸
        cout << "Lose";
    else // 平手
        cout << "Tie";
    return 0;
}