#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tim = 0;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int minmx = -1, maxmn = 101; // 找最大值的變數初始值要最小，找最小值的變數初始值要最大
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 60)
            minmx = max(minmx, arr[i]);
        else
        {
            maxmn = min(maxmn, arr[i]);
        }
        cout << arr[i] << ' ';
    }
    cout << endl;
    if (minmx == -1) // 沒變代表全部人都及格
        cout << "best case";
    else
        cout << minmx;
    cout << endl;
    if (maxmn == 101) // 沒變代表全部人都不及格
        cout << "worst case";
    else
        cout << maxmn;
    return 0;
}