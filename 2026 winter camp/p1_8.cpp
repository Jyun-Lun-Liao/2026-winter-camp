#include <bits/stdc++.h>
using namespace std;

bool p(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first; // 字串字典續小的在前面
    return a.second < b.second;   // 字串字母種類小的在前面
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> arr;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        set<int> st;
        for (int j = 0; j < s.size(); j++)
        {
            st.insert(s[j]);
        }
        arr.push_back({s, st.size()});
    }
    sort(arr.begin(), arr.end(), p);
    cout << arr[0].first;
}