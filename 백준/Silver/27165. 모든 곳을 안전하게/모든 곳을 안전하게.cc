
#include<iostream>
#include<vector>
using namespace std;



int main(int argc, char** argv)
{
    int n, x, s,e;
    bool isSafe = false;
    vector<int> boardVec;
    vector<int> oneVec; 
    cin >> n;
    for(int i = 0; i<=n; i++){
        int num;
        cin >> num;
        boardVec.push_back(num);
        if(num ==1){
            oneVec.push_back(i);
            
        }
    }
    cin >> x;
    
    if(oneVec.size()==2 && oneVec[0] == (oneVec[1]-x)){
        isSafe = true;
        s = oneVec[0];
        e = oneVec[1];
    }else if(oneVec.size()==1){
        int prev = oneVec[0]-x, next = oneVec[0]+x;
        if(prev>=0 && boardVec[prev]>=3){
            isSafe = true;
            s= prev;
            e = oneVec[0];
        }
        if(next<=n+1 && boardVec[next]>=1){
            isSafe = true;
            s = oneVec[0];
            e= next;
        }
    }else if(oneVec.size()==0){
        for(int i = 0; i<=n-x; i++){
            if(boardVec[i]>2&&boardVec[i+x]>0){
                isSafe = true;
                s= i;
                e = i+x;
            }
        }
    }




    if(isSafe){
        cout<< "YES" << '\n';
        cout << s << ' ' << e;
    }else{
        cout << "NO";
    }
	return 0;
}