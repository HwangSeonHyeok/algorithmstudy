class Solution {
    public int solution(int[][] board, int[][] skill) {
        int n = board[0].length;
        int m = board.length;
        int[][] degreeInfo = new int[m+1][n+1];
        for(int[] cmd:skill){
            int type = cmd[0];
            int r1 = cmd[1];
            int c1 = cmd[2];
            int r2 = cmd[3];
            int c2 = cmd[4];
            int degree = cmd[5];
            if(type==1)degree*=-1;
            degreeInfo[r1][c1] += degree;
            degreeInfo[r1][c2+1] -= degree;
            degreeInfo[r2+1][c1] -= degree;
            degreeInfo[r2+1][c2+1] += degree;
        }
        
        int answer = 0;
        for(int i = 0; i<m;i++){
            for(int j = 1; j<n;j++){
                degreeInfo[i][j]+=degreeInfo[i][j-1];
            }
        }
        for(int i = 0; i<n;i++){
            for(int j = 1; j<m;j++){
                degreeInfo[j][i]+=degreeInfo[j-1][i];
            }
        }
        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
                if(degreeInfo[i][j]+board[i][j]>0)answer++;
            }
        }
        return answer;
    }
}