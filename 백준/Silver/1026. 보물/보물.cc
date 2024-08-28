#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0;
    vector<int> v1, v2;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v1.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v2.push_back(num);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++)
    {
        ans += (v1[i] * v2[n - 1 - i]);
    }

    cout << ans;
}
