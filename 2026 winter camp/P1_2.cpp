#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, ans;
    bool can = true;
    cin >> a >> b >> ans;
    a = (a != 0 ? 1 : 0), b = (b != 0 ? 1 : 0); // 將正整數轉成 1
    if ((a && b) == ans)
        can = false, cout << "AND" << endl;
    if ((a || b) == ans)
        can = false, cout << "OR" << endl;
    if ((a ^ b) == ans)
        can = false, cout << "XOR" << endl;
    if (can) // 邏輯運算的解果跟答案都沒有相同就輸出
        cout << "IMPOSSIBLE" << endl;
    return 0;
}