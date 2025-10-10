class Solution {
    int MAX_CNT = 1000001;
    public int[] solution(int[][] edges) {
        int[] answer = new int[4];
        int[][] accessInfo = new int[MAX_CNT][2];
        for(int[] edge:edges){
            int a = edge[0];
            int b = edge[1];
            accessInfo[a][0]++;
            accessInfo[b][1]++;
        }
        for(int i = 1; i<MAX_CNT;i++){
            int out = accessInfo[i][0];
            int in = accessInfo[i][1];
            if(in==0&&out==0)continue;
            if(in==0&&out>1){
                answer[0] = i;
            }else if(out==0){
                answer[2]++;
            }else if(out==2){
                answer[3]++;
            }
        }
        int donut = accessInfo[answer[0]][0]-answer[2]-answer[3];
        answer[1] = donut;
        
        return answer;
    }
}