#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }
        unordered_map<int, int> scoreBoard;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int p;
                cin >> p;
                scoreBoard[p]++;
            }
        }
        vector<pair<int, int>> vec(scoreBoard.begin(), scoreBoard.end());
        sort(vec.begin(), vec.end(), cmp);
        int secondScore = vec[1].second;
        for (int i = 1; i < vec.size(); i++)
        {
            if(vec[i].second!=secondScore){
                break;
            }
            cout << vec[i].first << ' ';
        }
        cout << '\n';
    }
}
