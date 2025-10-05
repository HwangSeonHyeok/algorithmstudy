import java.util.*;
class Solution {
    int[] discount = {40,30,20,10};
    int ansSub = 0;
    int ansAmount = 0;
    int[][] usersG;
    int[] emoticonsG;
    int[] selected;
    void solve(int idx){
        if(idx==emoticonsG.length){
            int sub = 0;
            int amount = 0;
            for(int i = 0;i<usersG.length;i++){
                double userAmount = 0;
                for(int j = 0; j<emoticonsG.length;j++){
                    if(discount[selected[j]]>=usersG[i][0]){
                        userAmount +=(emoticonsG[j]*(100-discount[selected[j]]))/100;
                    }
                }
                if(usersG[i][1]<=userAmount){
                    sub++;
                }else{
                    amount+=userAmount;
                }
            }
            if(sub>ansSub){
                ansSub = sub;
                ansAmount = amount;
            }else if(sub==ansSub){
                ansAmount = Math.max(ansAmount,amount);
            }
            return;
        }
        for(int i = 0; i<4;i++){
            selected[idx] = i;
            solve(idx+1);
        }
    }
    
    
    
    public int[] solution(int[][] users, int[] emoticons) {
        int[] answer = {};
        usersG = users;
        emoticonsG = emoticons;
        selected = new int[emoticons.length];
        solve(0);
        answer = new int[2];
        answer[0] = ansSub;
        answer[1] = ansAmount;  
        return answer;
    }
}