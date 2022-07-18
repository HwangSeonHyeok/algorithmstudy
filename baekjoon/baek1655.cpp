#include<iostream>
#include<algorithm>
using namespace std;
const int MAX = 100002;
class MaxHeap{
    private:
    int data[MAX];
    int size;
    public:
    MaxHeap();

    void push(int x);
    void pop();
    int parent();
    int length();
};
MaxHeap::MaxHeap(){
    size = 0;
    for(int i = 0; i<MAX;i++){
        data[i] = -10001;
    }
}
int MaxHeap::length(){
    return size;
}
int MaxHeap::parent(){
    if(size>0){
        return data[1];
    }
    else{
        return -10001;
    }
}
void MaxHeap::push(int a){
    size++;
    data[size] = a;
    int idx = size, parent = idx/2, temp=data[parent];
    while(temp<data[idx]){
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
void MaxHeap::pop(){
    if(size == 0){
        //cout << 0 << '\n';
        return ;
    }
    int result = data[1], currentidx = 1, cidx, temp=data[size];
    //cout << result << '\n';
    data[1] = temp;
    data[size] = -10001;
    size--;
    while(1){
        cidx = currentidx*2;
        if(data[cidx]<data[cidx+1]){
            cidx ++;
        }
        if(data[currentidx]<data[cidx]){
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
class MinHeap{
    private:
    int data[MAX];
    int size;
    public:
    MinHeap();

    void push(int x);
    void pop();
    int parent();
    int length();
};
MinHeap::MinHeap(){
    size = 0;
    for(int i = 0; i<MAX; i++){
        data[i] = -10001;
    }
}
int MinHeap::length(){
    return size;
}
int MinHeap::parent(){
    if(size>0){
        return data[1];
    }
    else{
        return 10001;
    }
}
void MinHeap::push(int a){
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
void MinHeap::pop(){
    if(size == 0){
        //cout << 0 << '\n';
        return ;
    }
    int result = data[1], currentidx = 1, cidx, temp=data[size];
    //cout << result << '\n';
    data[1] = temp;
    data[size] = -10001;
    size--;
    while(1){
        cidx = currentidx*2;
        if(data[cidx]==-10001&&data[cidx+1]==-10001){
            break;
        }
        if(data[cidx]>data[cidx+1]){
            if(data[cidx+1]!=-10001)
                cidx ++;
        }
        else{
            if(data[cidx]==10001){
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
    int N, num, middle;
    MaxHeap maxheap;
    MinHeap minheap;
    cin >> N;
    cin >> num;
    maxheap.push(num);
    middle = maxheap.parent();
    cout<<maxheap.parent()<<'\n';
    int swit = 2;
    for(int i = 0; i<N-1; i++){
        cin >> num;
        if(minheap.length()==maxheap.length()){
            if(num<middle){
                maxheap.push(num);
            }
            else{
                minheap.push(num);
                maxheap.push(minheap.parent());
                minheap.pop();
            }
        }
        else{
            if(num>middle){
                minheap.push(num);
            }
            else{
                maxheap.push(num);
                minheap.push(maxheap.parent());
                maxheap.pop();

            }

            
        }
        middle=maxheap.parent();
        cout<<middle<<'\n';
    }
    
}