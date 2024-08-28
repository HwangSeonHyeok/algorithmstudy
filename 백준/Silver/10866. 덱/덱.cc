#include<iostream>
#include<string>
using namespace std;
const int MAX = 10001;

class Deque{
private:
    int data[MAX];
    int index_front;
    int index_back;
    int dataSize;
public:
    Deque();
    bool empty();
    void push_front(int a);
    void push_back(int a);
    void pop_front();
    void pop_back();
    int front();
    int back();
    int size();
};
Deque::Deque(){
    index_front = 0;
    index_back = 0;
    dataSize = 0;
}

bool Deque::empty(){
    return dataSize==0;
}

void Deque::push_front(int a){
    data[index_front] = a;
    index_front = (index_front-1 +MAX)%MAX;
    dataSize++;
}
void Deque::push_back(int a){
    index_back = (index_back+1)%MAX;
    data[index_back] = a;
    dataSize++;
}
void Deque::pop_front(){
    if(empty()){
        cout<<-1<<"\n";
    }
    else{
        index_front  = (index_front+1)%MAX;
        cout << data[index_front]<<"\n";
        dataSize--;
    }
}
void Deque::pop_back(){
    if(empty()){
        cout << -1<<"\n";
    }
    else{
        cout << data[index_back]<<"\n";
        index_back = (index_back-1 +MAX)%MAX;
        dataSize--;
    }
}
int Deque::front(){
    if(empty()){
        return -1;
    }
    else{
        return data[(index_front+1)%MAX];
    }
}
int Deque::back(){
    if(empty()){
        return -1;
    }
    else{
        return data[index_back];
    }
}
int Deque::size(){
    return dataSize;
}



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t,x;
    string str;
    Deque dq;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> str;
        if(str=="push_front"){
            cin >> x;
            dq.push_front(x);
        }
        else if(str=="push_back"){
            cin>>x;
            dq.push_back(x);
        }
        else if(str=="pop_front"){
            dq.pop_front();
        }
        else if(str=="pop_back"){
            dq.pop_back();
        }
        else if(str=="size"){
            cout << dq.size()<<'\n';
        }
        else if(str=="empty"){
            cout<<dq.empty()<<'\n';
        }
        else if(str=="front"){
            cout<<dq.front()<<'\n';
        }
        else if(str=="back"){
            cout<<dq.back()<<'\n';
        }
        

    }
    
}