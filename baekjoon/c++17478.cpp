//����Լ��� ������?
#include<iostream>
using namespace std;

void answer(int cur, int total){
    for(int i = 0; i < cur; i++){
        cout<<"____";
    }
    cout<<"\"����Լ��� ������?\"\n";
    if(cur==total){
        for(int i = 0; i < cur; i++){
            cout<<"____";
        }
        cout<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    }
    else{
        for(int i = 0; i < cur; i++){
            cout<<"____";
        }
        cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
        for(int i = 0; i < cur; i++){
            cout<<"____";
        }
        cout<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
        for(int i = 0; i < cur; i++){
            cout<<"____";
        }
        cout<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
        answer(cur+1,total);
    }
    for(int i = 0; i < cur; i++){
        cout<<"____";
    }
    cout << "��� �亯�Ͽ���.\n";

}

int main(){
    int N;
    cin >>N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<endl;
    answer(0,N);
    

}