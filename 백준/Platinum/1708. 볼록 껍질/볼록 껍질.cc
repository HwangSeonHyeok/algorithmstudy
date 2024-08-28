#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

struct point{
    long long x,y;
};

long long ccw(point p1, point p2, point p3){
    long long ans = p1.x*p2.y + p2.x*p3.y + p3.x*p1.y - (p3.x*p2.y + p2.x*p1.y + p1.x*p3.y);
    return ans;   
}

bool ycomp(point p1, point p2){
    if(p1.y == p2.y) 
        return p1.x < p2.x;
    return p1.y<p2.y;
}
point startp;
bool anglecomp(point p1, point p2){
    long long comccw = ccw(startp,p1,p2);
    if(comccw == 0){
        long long dx1 = startp.x - p1.x;
        long long dy1 = startp.y - p1.y;
        long long dx2 = startp.x - p2.x;
        long long dy2 = startp.y - p2.y;
        return dx1*dx1 + dy1*dy1 < dx2*dx2 + dy2*dy2;
    }
    return ccw(startp, p1, p2)>0;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //long long n;
    int n;
    cin >> n;
    vector<point> pointvec(n);
    for(int i = 0; i<n; i++){
        long long x,y;
        cin >> pointvec[i].x >> pointvec[i].y;
    }
    sort(pointvec.begin(), pointvec.end(), ycomp);
    startp = pointvec[0];
    sort(pointvec.begin()+1, pointvec.end(), anglecomp);

    vector<point> stack;
    stack.push_back(pointvec[0]);
    stack.push_back(pointvec[1]);

    for(int i = 2; i< n; i++){
        point p3 = pointvec[i];
        while(stack.size()>=2){
            point p2 = stack.back();
            stack.pop_back();
            point p1 = stack.back();
            if(ccw(p1,p2,p3)>0){
                stack.push_back(p2);
                break;
            } 
        }
        stack.push_back(p3);
    }
    
    cout << stack.size() << endl;

}