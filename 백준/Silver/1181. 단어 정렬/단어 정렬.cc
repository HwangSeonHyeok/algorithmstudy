#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool cmp(string a, string b){
    if(a.length()==b.length()){
        return a<b;

    }
    else return a.length()< b.length();
}

int main(){
	int n, sum=0;
    string word;
    
    cin >> n;
    string* stringarr= new string[n];
    for(int i = 0; i<n; i++){
        cin >> word;
        stringarr[i] = word;
    }
    sort(stringarr,stringarr+n,cmp);
    printf("%s\n", stringarr[0].c_str());
    for(int i = 1; i < n; i++){
        if(stringarr[i]!=stringarr[i-1])
            printf("%s\n", stringarr[i].c_str());
    }
    
}