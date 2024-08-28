#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef struct {
    int age;
    string name;
    int num;

}Id;
bool cmp(Id a, Id b){
    if(a.age == b.age)
        return a.num<b.num;
    else return a.age<b.age;
    
}

int main(){
	int n, sum=0;
    
    cin >> n;
    Id* idarr = new Id[n];
    for(int i = 0; i<n; i++){
        cin >> idarr[i].age >> idarr[i].name;
        idarr[i].num = i;
    }
    sort(idarr, idarr+n, cmp);
    for(int i = 0; i < n; i++){
        printf("%d %s\n", idarr[i].age, idarr[i].name.c_str());
    }
    
}