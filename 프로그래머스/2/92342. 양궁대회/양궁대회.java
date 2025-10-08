class Solution {
    int[] answer = new int[11];
    int winningDiff = 0;
    void solve(int depth, int[] gameSet, int[] aInfo,int leftArrow, int scoreL, int scoreA){
        if(depth == 10){
            if(scoreL>scoreA&&scoreL-scoreA>winningDiff){
                winningDiff = scoreL-scoreA;
                for(int i = 0;i<10;i++){
                    answer[i] = gameSet[i];
                }
                answer[10] = leftArrow;
            }else if(scoreL>scoreA&&scoreL-scoreA==winningDiff){
                boolean isLastBigger = false;
                for(int i = 0; i<10;i++){
                    if(answer[i]>gameSet[i])isLastBigger = false;
                    if(answer[i]<gameSet[i])isLastBigger = true;
                    
                }
                if(isLastBigger){
                    for(int i = 0;i<10;i++){
                        answer[i] = gameSet[i];
                    }
                    answer[10] = leftArrow;
                }
            }
            return;
        }
        if(leftArrow>aInfo[depth]){
            gameSet[depth] = aInfo[depth]+1;
            solve(depth+1,gameSet,aInfo,leftArrow-gameSet[depth],scoreL+10-depth,scoreA);
        }
        gameSet[depth] = 0;
        solve(depth+1,gameSet,aInfo,leftArrow,scoreL,(aInfo[depth]==0)?scoreA:scoreA+10-depth);

        
    }
    
    public int[] solution(int n, int[] info) {
        solve(0,new int[11], info,n,0,0);
        
        if(winningDiff==0){
            int[] lose = {-1};
            return lose;
            
        }
        
        return answer;
    }
}