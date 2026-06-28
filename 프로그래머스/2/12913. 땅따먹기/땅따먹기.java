class Solution {
    int solution(int[][] land) {
        int answer = 0;
        int[] prev = new int[4];
        for(int[] current : land){
            int[] next = new int[4];
            next[0] = Math.max(prev[1],Math.max(prev[2],prev[3])) + current[0];
            next[1] = Math.max(prev[0],Math.max(prev[2],prev[3])) + current[1];
            next[2] = Math.max(prev[1],Math.max(prev[0],prev[3])) + current[2];
            next[3] = Math.max(prev[1],Math.max(prev[2],prev[0])) + current[3];
            prev = next;
        }
        for(int score:prev){
            answer = Math.max(answer,score);
        }
        

        return answer;
    }
}