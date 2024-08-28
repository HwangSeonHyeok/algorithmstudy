#include<iostream>
#include<algorithm>
using namespace std;
const int MAX = 100002;
class Heap{
    private:
    int data[MAX]={0,};
    int size;
    public:
    Heap();

    void push(int x);
    void pop();
};
Heap::Heap(){
    size = 0;
}
void Heap::push(int a){
    size++;
    data[size] = a;
    int idx = size, parent = idx/2, temp=data[parent];
    while(temp>data[idx]){
        if(idx==1){
            break;
        }
        data[parent] = data[idx];
        data[idx] = temp;
        idx= parent;
        parent = idx/2;
        temp = data[parent];
    }
}
void Heap::pop(){
    if(size == 0){
        cout << 0 << '\n';
        return ;
    }
    int result = data[1], currentidx = 1, cidx, temp=data[size];
    cout << result << '\n';
    data[1] = temp;
    data[size] = 0;
    size--;
    while(1){
        cidx = currentidx*2;
        if(data[cidx]==0&&data[cidx+1]==0){
            break;
        }
        if(data[cidx]>data[cidx+1]){
            if(data[cidx+1]!=0)
                cidx ++;
        }
        else{
            if(data[cidx]==0){
                cidx++;
            }
        }
        if(data[currentidx]>data[cidx]){
            data[currentidx] = data[cidx];
            currentidx=cidx;
            data[currentidx] = temp;
        }
        else{
            break;
        }
        if(currentidx>size/2){
            break;
        }

    }
    return ;

}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x, N;
    Heap maxheap;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> x;
        if(x == 0){
            maxheap.pop();
        }
        else{
            maxheap.push(x);
        }
    }
    
}