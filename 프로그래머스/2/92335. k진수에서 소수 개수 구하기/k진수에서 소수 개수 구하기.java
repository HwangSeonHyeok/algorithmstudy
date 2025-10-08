
class Solution {
    boolean isPrime(long num){
        if(num==1)return false;
        if(num==2)return true;
        if(num%2==0)return false;
        for(long i = 3; i*i<=num;i+=2){
            if(num%i==0)return false;
        }
        
        return true;
        
    }
    
    public int solution(int n, int k) {
        int answer = 0;
        String changed = Integer.toString(n,k);
        int prevZero =0;
        for(int i =0; i<changed.length();i++){
            char current = changed.charAt(i);
            if(current=='0'){
                long num = Long.parseLong(changed.substring(prevZero,i));
                prevZero = i;
                if(isPrime(num))answer++;
            }
        }
        long num = Long.parseLong(changed.substring(prevZero,changed.length()));
        if(isPrime(num))answer++;
        return answer;
    }
}