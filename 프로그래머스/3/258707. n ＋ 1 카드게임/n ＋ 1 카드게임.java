import java.util.*;
class Solution {
    public int solution(int coin, int[] cards) {
        int answer = 0;
        int required = cards.length+1;
        int[] cost = new int[required];
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        for(int i = 0; i< required;i++){
            cost[i] = 2;
        }
        for(int i = 0; i*3<cards.length;i++){
            cost[cards[i]] = 0;
            if(cost[required-cards[i]]==0){
                pq.add(0);
            }
        }
        
        for(int i = cards.length/3-1;i<cards.length;i+=2){
            answer++;
            if(i+1==cards.length)break;
            int drawCard1 = cards[i+1];
            int drawCard2 = cards[i+2];
            cost[drawCard1] = 1;
            if(cost[required-drawCard1]!=2){
                pq.add(cost[drawCard1]+cost[required-drawCard1]);
            }
            cost[drawCard2] = 1;
            if(cost[required-drawCard2]!=2){
                pq.add(cost[drawCard2]+cost[required-drawCard2]);
            }
            if(pq.isEmpty()){
                break;
            };
            int currentCost = pq.poll();
            System.out.println(currentCost);
            if(coin<currentCost){
                break;
            }
            coin-=currentCost;
        }
        
        
        return answer;
    }
}