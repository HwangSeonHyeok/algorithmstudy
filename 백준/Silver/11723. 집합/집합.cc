#include<iostream>
#include<string>
using namespace std;
class Set{
    private:
    bool data[21]={0,};
    public:
    Set();
    void add(int x);
    void remove(int x);
    void check(int x);
    void toggle(int x);
    void all();
    void empty();
};
Set::Set(){
    for(int i = 0; i<=21;i++){
        data[i]=false;
    }
}
void Set::add(int x){
    if(!data[x]){
        data[x]=true;
    }
}
void Set::remove(int x){
    if(data[x]){
        data[x]=false;
    }
}
void Set::check(int x){
    cout << data[x] << '\n';
}
void Set::toggle(int x){
    if(data[x]){
        data[x] = false;
    }
    else{
        data[x] = true;
    }
}
void Set::all(){
    for(int i = 0; i<=21; i++){
        data[i] = true;
    }
}
void Set::empty(){
    for(int i = 0; i<=21; i++){
        data[i] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int M, x;
    string str;
    Set set;
    cin >> M;
    for(int i = 0; i<M; i++){
        cin >> str;
        if(str=="add"){
            cin >> x;
            set.add(x);
        }
        else if(str == "remove"){
            cin >> x;
            set.remove(x);
        }
        else if(str == "check"){
            cin >> x;
            set.check(x);
        }
        else if(str == "toggle"){
            cin >> x;
            set.toggle(x);
        }
        else if(str == "all"){
            set.all();
        }
        else if(str == "empty"){
            set.empty();
        }
    }

}