import java.util.*;
class Solution {
    class ParkingInfo{
        int enterTime = -1;
        int parkingTime = 0;
        public ParkingInfo(String time){
            enterTime = timeToMinute(time);
        }
        
        int timeToMinute(String time){
            String[] split = time.split(":");
            int hour = Integer.parseInt(split[0]);
            int minute = Integer.parseInt(split[1]);
            return hour*60 + minute;
            
        }
        public void out(String time){
            int outTime = timeToMinute(time);
            parkingTime+=outTime-enterTime;
            enterTime = -1;
        }
        public void in(String time){
            enterTime = timeToMinute(time);
        }
        
    }
    public int[] solution(int[] fees, String[] records) {
        
        Map<String,ParkingInfo> map = new TreeMap<String, ParkingInfo>();
        int defaultTime = fees[0];
        int defaultFee = fees[1];
        int timeUnit = fees[2];
        int unitFee = fees[3];
        for(String record:records){
            String[] arr = record.split(" ");
            String time = arr[0];
            String carNum = arr[1];
            String io = arr[2];
            if(io.equals("IN")){
                if(map.containsKey(carNum)){
                    ParkingInfo p = map.get(carNum);
                    p.in(time);
                    map.put(carNum,p);
                }else{
                    map.put(carNum,new ParkingInfo(time));
                }
            }else{
                ParkingInfo p = map.get(carNum);
                p.out(time);
                map.put(carNum,p);
            }
        }
        int[] answer = new int[map.size()];
        int i = 0;
        for(ParkingInfo p:map.values()){
            if(p.enterTime != -1){
                p.out("23:59");
            }
            int time = p.parkingTime;
            int fee = defaultFee;
            if(time>defaultTime){
                fee+=(time-defaultTime+timeUnit-1)/timeUnit*unitFee;
            }
            answer[i++] = fee;
        }
        
        return answer;
    }
}