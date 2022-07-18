#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string strarr[10]= {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string str1, str2, str3;
    long long ans=0;
    cin >> str1;
    for(int i = 0; i<10; i++){
        if(str1==strarr[i]){
            ans += i*10;
        }
    }
    cin >> str2;
    for(int i = 0; i<10; i++){
        if(str2==strarr[i]){
            ans += i;
        }
    }
    cin >> str3;
    for(int i = 0; i<10; i++){
        if(str3==strarr[i]){
            ans *= pow(10,i);
        }
    }
    cout << ans;

}