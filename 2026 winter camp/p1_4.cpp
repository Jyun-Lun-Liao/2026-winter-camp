#include <bits/stdc++.h>
using namespace std;

bool p(pair<int, int> x, pair<int, int> y)
{
    int x_ = pow(x.first, 2) + pow(x.second, 2); // pow( a, b) a 為底數， b 為次方
    int y_ = pow(y.first, 2) + pow(y.second, 2);
    return x_ > y_; // 由於題目要由大到小排序，所以回傳用的是大於
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n, {0, 0});
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), p);
    cout << v[1].first << ' ' << v[1].second; // 輸出能力值第二大的
}