#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, m, ans = 10000;
    cin >> n >> m;
    string str[n];
    for(int i = 0; i< n; i++){
        cin >> str[i];
    }
    for(int i = 0; i < n-7; i++){
        //���۰���
        for(int j = 0; j < m-7; j++){
            //���ۼ�����
            int count = 0, count2 = 0;
            char bw, bw2;
            //�����÷�����
            if(str[i][j]=='B'){
                bw = 'W';
                bw2 = 'B';
            }
            else {
                bw = 'B';
                bw2 = 'W';
            }
            
            //������ ���� ���� 64ȸ�ݺ�
            for(int k = i; k < i+8; k++){
                if(bw == 'B'){
                    bw = 'W';
                }
                else {
                    bw = 'B';
                }
                if(bw2 == 'B'){
                    bw2 = 'W';
                }
                else {
                    bw2 = 'B';
                }

                for(int l = j; l < j + 8; l++){
                    if(bw != str[k][l]) {
                        count++;
                    }
                    if(bw2 != str[k][l])
                        count2++;
                    if(bw == 'B'){
                        bw = 'W';
                    }
                    else{
                        bw = 'B';
                    }
                    if(bw2 == 'B'){
                        bw2 = 'W';
                    }
                    else{
                        bw2 = 'B';
                    }
                    if(count>ans && count2 > ans) break;

                }
            }
            if(count>count2) count = count2;
            if(count<ans)
                ans = count;
            
        }
    }
    cout << ans;
}