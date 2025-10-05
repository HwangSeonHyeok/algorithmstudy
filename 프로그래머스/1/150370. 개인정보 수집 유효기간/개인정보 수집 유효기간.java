import java.util.*;
class Solution {
    
    int dateToDay(String date){
        StringTokenizer st = new StringTokenizer(date,".");
        int year = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int d = Integer.parseInt(st.nextToken());
        return year*336+m*28+d;
    }
    public int[] solution(String today, String[] terms, String[] privacies) {
        List<Integer> ansList = new ArrayList<>();
        int todayDay = dateToDay(today);
        Map<Character,Integer> map = new HashMap<>();
        for(String term: terms){
            StringTokenizer st = new StringTokenizer(term);
            map.put(st.nextToken().charAt(0),Integer.parseInt(st.nextToken()));
        }
        for(int i = 1; i<=privacies.length;i++){
            StringTokenizer st = new StringTokenizer(privacies[i-1]);
            String date = st.nextToken();
            Character type = st.nextToken().charAt(0);
            int dueDay = dateToDay(date)+28*map.get(type);
            if(todayDay>=dueDay){
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