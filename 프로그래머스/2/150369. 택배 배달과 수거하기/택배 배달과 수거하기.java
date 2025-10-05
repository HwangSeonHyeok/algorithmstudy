import java.util.*;
class Solution {
    public long solution(int cap, int n, int[] deliveries, int[] pickups) {
        long answer = 0;
        int[] deliverySum = new int[n+1];
        int[] pickupSum = new int[n+1];
        for(int i = n-1;i>=0;i--){
            deliverySum[i] = deliverySum[i+1]+deliveries[i];
            pickupSum[i] = pickupSum[i+1]+pickups[i];
        }
        int deliveryIdx = n-1;
        int pickupIdx = n-1;
        while(deliveryIdx>=0&&deliverySum[deliveryIdx]==0){
            deliveryIdx--;
        }
        while(pickupIdx>=0&&pickupSum[pickupIdx]==0){
            pickupIdx--;
        }
        int cnt = 0;
        while(pickupIdx>=0||deliveryIdx>=0){
            cnt++;
            int maximum = cnt*cap;
            answer+= Math.max(pickupIdx+1,deliveryIdx+1)*2;
            while(deliveryIdx>=0&&deliverySum[deliveryIdx]<=maximum){
                deliveryIdx--;
            }
            while(pickupIdx>=0&&pickupSum[pickupIdx]<=maximum){
                pickupIdx--;
            }
        }
        return answer;
    }
}