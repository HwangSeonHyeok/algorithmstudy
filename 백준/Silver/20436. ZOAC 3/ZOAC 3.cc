#include <iostream>
#include<cstdlib>
#include <map>
using namespace std;

int main()
{
    map<char, pair<pair<int, int>,bool>> m; // 오른손 true
    m['q'] = make_pair(make_pair(0,0),false);
    m['w'] = make_pair(make_pair(0,1),false);
    m['e'] = make_pair(make_pair(0,2),false);
    m['r'] = make_pair(make_pair(0,3),false);
    m['t'] = make_pair(make_pair(0,4),false);
    m['y'] = make_pair(make_pair(0,5),true);
    m['u'] = make_pair(make_pair(0,6),true);
    m['i'] = make_pair(make_pair(0,7),true);
    m['o'] = make_pair(make_pair(0,8),true);
    m['p'] = make_pair(make_pair(0,9),true);
    m['a'] = make_pair(make_pair(1,0),false);
    m['s'] = make_pair(make_pair(1,1),false);
    m['d'] = make_pair(make_pair(1,2),false);
    m['f'] = make_pair(make_pair(1,3),false);
    m['g'] = make_pair(make_pair(1,4),false);
    m['h'] = make_pair(make_pair(1,5),true);
    m['j'] = make_pair(make_pair(1,6),true);
    m['k'] = make_pair(make_pair(1,7),true);
    m['l'] = make_pair(make_pair(1,8),true);
    m['z'] = make_pair(make_pair(2,0),false);
    m['x'] = make_pair(make_pair(2,1),false);
    m['c'] = make_pair(make_pair(2,2),false);
    m['v'] = make_pair(make_pair(2,3),false);
    m['b'] = make_pair(make_pair(2,4),true);
    m['n'] = make_pair(make_pair(2,5),true);
    m['m'] = make_pair(make_pair(2,6),true);
    pair<int, int> currentL, currentR;
    char startL, startR;
    string str;
    int time = 0;
    cin >> startL >> startR;
    cin >> str;
    currentL = m[startL].first;
    currentR = m[startR].first;
    for(int i = 0; i<str.length();i++){
        pair<int,int> nextXY = m[str[i]].first;
        if(m[str[i]].second){
            time += abs(currentR.first-nextXY.first);
            time += abs(currentR.second-nextXY.second);
            time += 1;
            currentR = nextXY;
        }else{
            time += abs(currentL.first-nextXY.first);
            time += abs(currentL.second-nextXY.second);
            time += 1;
            currentL = nextXY;

        }

    }
    cout << time;
}