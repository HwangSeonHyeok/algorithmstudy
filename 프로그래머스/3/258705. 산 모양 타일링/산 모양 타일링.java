class Solution {
    public int solution(int n, int[] tops) {
        int answer = 0;
        int[] dp = new int[n*2+2];
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i<dp.length;i++){
            if(i%2==0&&tops[i/2-1]==1){
                dp[i] = dp[i-1]*2+dp[i-2];
            }else{
                dp[i] = dp[i-1]+dp[i-2];
            }
            dp[i]%=10007;
        }
        
        
        answer = dp[n*2+1];
        return answer;
    }
}