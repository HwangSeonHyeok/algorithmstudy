import java.util.*;
class Solution {
    Map<Character,Integer> map = new HashMap<>();
    public int[] solution(String today, String[] terms, String[] privacies) {
        List<Integer> ansList = new ArrayList<>();
        StringTokenizer st = new StringTokenizer(today,".");
        int todayY = Integer.parseInt(st.nextToken());
        int todayM = Integer.parseInt(st.nextToken());
        int todayD = Integer.parseInt(st.nextToken());
        for(String term: terms){
            st = new StringTokenizer(term);
            map.put(st.nextToken().charAt(0),Integer.parseInt(st.nextToken()));
        }
        for(int i = 1; i<=privacies.length;i++){
            st = new StringTokenizer(privacies[i-1]);
            String date = st.nextToken();
            Character type = st.nextToken().charAt(0);
            st = new StringTokenizer(date,".");
            int agreeY = Integer.parseInt(st.nextToken());
            int agreeM = Integer.parseInt(st.nextToken());
            int agreeD = Integer.parseInt(st.nextToken());
            int dueY = agreeY;
            int dueM = agreeM;
            int dueD = agreeD-1;
            if(dueD==0){
                dueD = 28;
                dueM--;
            }
            dueM+=map.get(type);
            dueY += dueM/12;
            dueM%=12;
            if(dueM==0){
                dueM=12;
                dueY--;
            }
            if(todayY>dueY||
               (todayY==dueY&&todayM>dueM)||
               (todayY==dueY&&todayM==dueM&&todayD>dueD)
              ){
                ansList.add(i);
            }
        }
        
        Collections.sort(ansList);
        int[] answer = new int[ansList.size()];
        for(int i = 0; i<ansList.size();i++){
            answer[i] = ansList.get(i);
        }
        return answer;
    }
}