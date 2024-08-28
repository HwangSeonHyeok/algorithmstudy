#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

long long TentoN(long long int N, long long int d){
    long long int buf, num = N, result=0, i=0;
    while(num>0){
        buf = num%d;
        for(int j = 0; j<i;j++){
            buf*=10;
        }
        result += buf; 
        num /=  d;
        i++;
    }
    return result;
}

long long NtoTen(long long int N, long long int d){
    long long int buf, num = N, result=0, i = 0;
    while(num>0){
        buf = num%10;
        result += pow(d,i)*buf;
        num /= 10;
        i++;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long N, d, convertednum, ans, cmpnum=0;
    vector<int> vec;
    cin >> N >> d;
    if(N>=2&& d==2){
        cout << -1;
        return 0;
    }
    convertednum = TentoN(N,d);
    //cout << convertednum << endl;
    for(int i = 0; i<d; i++){
        vec.push_back(i);
    }
    do{
        if(vec[0]==0) continue;
        cmpnum = 0;
        for(int i = 0; i<vec.size(); i++){
            cmpnum *=10;
            cmpnum += vec[i];
        }
        //combine.push_back(cmpnum);
        //cout << cmpnum << endl;
        if(cmpnum>convertednum){
           // cout << cmpnum << endl;
            cout<<NtoTen(cmpnum,d);
            return 0;
        }
    }while(next_permutation(vec.begin(),vec.end()));
    cout << -1;
}