#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, total = 0, arr[40];
    cin >> n >> m;

    for (int j = 0; j < m; j++)
    {
        cin >> arr[j];
    }

    while (1)
    {
        bool change = true;
        for (int j = 0; j < m; j++)
        {
            if (arr[j] == -1)
                continue;
            for (int k = j + 1; k < m; k++)
            {
                if (arr[k] == -1)
                    continue;
                if (arr[j] == arr[k])
                {
                    change = false;
                    total += arr[k];
                    arr[k] = -1, arr[j] = -1;
                    break;
                }
                else
                    break;
            }
        }
        if (change)
            break;
    }

    cout << total;
}