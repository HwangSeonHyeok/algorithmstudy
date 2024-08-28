#include <iostream>
#include <string>
#include <vector>
using namespace std; 


int main(){
    string a, b;
    int size1, size2, minsize, anssize, ten = 0, z = 0;
    vector<int> ans;
    cin >> a >> b;
    size1 = a.length();
    size2 = b.length();
    if(size1 > size2)
        minsize = size2;
    
    else {
        z = 1;
        minsize  = size1;
        }

    for(int i = 0; i < minsize; i++){
        int n1, n2, sum;
        n1 = a[--size1] - '0';
        n2 = b[--size2] - '0';
        sum = n1 + n2 + ten;
        if(sum >= 10){
            ten = 1;
            ans.push_back(sum-10);
        }
        else{
            ten = 0;
            ans.push_back(sum);
        }
    }
    if(z == 0){
        while(size1 !=0){
            int n = a[--size1] - '0' + ten;
            if(n>=10){
                ten = 1;
                ans.push_back(n-10);
            }
            else{
                ten = 0;
                ans.push_back(n);
            }
        }

    }else{
        while(size2 !=0){
            int n = b[--size2] - '0' + ten;
            if(n>=10){
                ten = 1;
                ans.push_back(n-10);
            }
            else{
                ten = 0;
                ans.push_back(n);
            }
        }

    }
    if(ten ==1){
        ans.push_back(1);
    }

    anssize = ans.size();
    for(int i = 0; i<anssize; i++){
        cout<< ans[anssize - i - 1];
    }
}