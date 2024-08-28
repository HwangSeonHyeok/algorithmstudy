#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int leftLength, rightLength, t;
    string left, right;
    string ans = "";
    cin >> leftLength >> rightLength;
    cin >> left;
    cin >> right;
    cin >> t;

    int rightIdx = 0, leftIdx = 1, currentT = 0;
    for (int i = 0; i <= t - leftLength; i++)
    {
        if (rightIdx < rightLength)
        {
            ans += right[rightIdx++];
        }
    }
    for (int i = 0; i < leftLength - t-1; i++)
    {

        ans += left[leftLength - leftIdx++];
    }
    while (!(currentT == t))
    {
        currentT++;
        if (leftIdx <= leftLength)
        {
            ans += left[leftLength - leftIdx++];
        }
        if (rightIdx < rightLength)
        {
            ans += right[rightIdx++];
        }
    }
    while (leftIdx <= leftLength)
    {
        ans += left[leftLength - leftIdx++];
    }

    while (rightIdx < rightLength)
    {
        ans += right[rightIdx++];
    }
    cout << ans;
}
