#include <iostream>
#include <list>
using namespace std; 
int d(int a){
    int b = 0, c = 0, d = 0, e = 0, x = 0, result = 0;
    b = a % 10;
    if(a >= 10){
        c= a / 10 % 10;
    }
    if(a >= 100){
        d= a / 10 / 10 % 10;
    }
    if(a >= 1000){
        e = a / 10 / 10 / 10 % 10;
    }
    result = a + b + c + d + e;
    return result;
}
int main(){
    list<int> a;
    for (int i = 1; i<10000; i++){
        a.push_back(i);
    }
    for(int i = 1; i<10000; i++){
        a.remove(d(i));
    }
    list<int>::iterator iter;
    for(iter = a.begin(); iter!= a.end(); iter++){
        cout << *iter << endl;
    }

}