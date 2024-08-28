#include <iostream>
#include <string>
using namespace std; 
int main(){
    int num1, num2, num1buf, num2buf, answer = 0;
    cin >> num1buf >> num2buf;
    num1 = (num1buf%10*100) + (num1buf%100 - num1buf%10) + (num1buf/100);
    num2 = (num2buf%10*100) + (num2buf%100 - num2buf%10) + (num2buf/100);
    if(num1 > num2) answer = num1;
    if(num1 < num2) answer = num2;
    cout << answer;

}