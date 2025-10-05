import java.util.*;
class Solution {
    public int[] solution(String[] id_list, String[] report, int k) {
        int userCnt = id_list.length;
        int[] answer = new int[userCnt];
        Map<String,Integer> nameIdx = new HashMap<>();
        for(int i = 0; i<userCnt;i++){
            nameIdx.put(id_list[i],i);
        }
        Set<String>[] reported = new HashSet[userCnt];
        for(int i = 0; i<userCnt;i++){
            reported[i] = new HashSet<>();
        }
        for(String str:report){
            StringTokenizer st = new StringTokenizer(str);
            String reportUser = st.nextToken();
            String reportedUser = st.nextToken();
            reported[nameIdx.get(reportedUser)].add(reportUser);
        }
        for(Set<String> s:reported){
            if(s.size()>=k){
                for(String reporter:s){
                    answer[nameIdx.get(reporter)]++;
                }
            }
        }
        
        return answer;
    }
}