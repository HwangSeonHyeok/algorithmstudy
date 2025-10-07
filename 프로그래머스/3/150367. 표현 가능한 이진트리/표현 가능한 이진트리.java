import java.util.*;
class Solution {
    boolean findTree(String binary){
        if(binary.length()==1)return true;
        int mid = binary.length()/2;
        if(binary.charAt(mid)=='0'){
            for(int i = 0; i<binary.length();i++){
                if(binary.charAt(i)=='1')return false;
            }
            return true;
        }
        boolean left = findTree(binary.substring(0,mid));
        boolean right = findTree(binary.substring(mid+1,binary.length()));
        return left&&right;
        
    }
    String toBinary(long number){
        StringBuilder binary = new StringBuilder();
        String tmp = Long.toBinaryString(number);
        int len = 2;
        while(len-1<tmp.length()){
            len*=2;
        }
        len--;
        for(int i = 0; i<len-tmp.length();i++){
            binary.append("0");
        }
        binary.append(tmp);
        return binary.toString();
        
    }
    public int[] solution(long[] numbers) {
        int len = numbers.length;
        int[] answer = new int[len];
        String[] binaries = new String[len];
        for(int i = 0; i<len;i++){
            binaries[i] = toBinary(numbers[i]);
        }
        for(int i = 0; i<len;i++){
            if(findTree(binaries[i])){
                answer[i] = 1;
            }
        }
        return answer;
    }
}