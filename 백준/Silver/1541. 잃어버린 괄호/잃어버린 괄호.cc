#include<algorithm>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;


int main(){
    vector<int> numarr;
    vector<string> pluscal;
    string str, strBuffer;
    int ans;
    cin >> str;
    istringstream iss(str);
    while(getline(iss, strBuffer,'-')){
        pluscal.push_back(strBuffer);
    }
    for(int i = 0; i<pluscal.size();i++){
        istringstream iss2(pluscal[i]);
        int sum = 0;
        while(getline(iss2,strBuffer,'+')){
            sum += stoi(strBuffer);
        }
        numarr.push_back(sum);
    }
    ans= numarr[0];
    for(int i = 1; i < numarr.size(); i++){
        ans -= numarr[i];
    }
    cout << ans;


}