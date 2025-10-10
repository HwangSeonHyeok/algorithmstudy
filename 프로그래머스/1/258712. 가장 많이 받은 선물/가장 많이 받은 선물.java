import java.util.*;
class Solution {
    class GiftInfo{
        String name;
        Map<String,Integer>sentGiftCnt;
        int giftValue;
        int nextGift;
        public GiftInfo(String name){
            this.name = name;
            giftValue = 0;
            nextGift = 0;
            sentGiftCnt = new HashMap<>();
        }
        public void sendGift(String receiver){
            if(sentGiftCnt.containsKey(receiver)){
                int cnt = sentGiftCnt.get(receiver);
                sentGiftCnt.put(receiver, cnt+1);
            }else{
                sentGiftCnt.put(receiver,1);
            }
        
            giftValue++;
        }
        public void receiveGift(){
            giftValue--;
        }
        
        public void nextReceive(){
            nextGift++;
        }
        
        public int findGiftCnt(String receiver){
            if(sentGiftCnt.containsKey(receiver)){
                return sentGiftCnt.get(receiver);
            }
            return 0;
        }
    }
    public int solution(String[] friends, String[] gifts) {
        int answer = 0;
        Map<String, GiftInfo> map = new HashMap<>();
        for(String friend:friends){
            map.put(friend,new GiftInfo(friend));
        }
        for(String gift:gifts){
            String[] split = gift.split(" ");
            String send = split[0];
            String receive = split[1];
            GiftInfo sendInfo = map.get(send);
            sendInfo.sendGift(receive);
            GiftInfo receiveInfo = map.get(receive);
            receiveInfo.receiveGift();
        }
        List<GiftInfo> giftInfos = new ArrayList(map.values());
        for(int i = 0; i<giftInfos.size();i++){
            GiftInfo aInfo = giftInfos.get(i);
            for(int j = i+1;j<giftInfos.size();j++){
                GiftInfo bInfo = giftInfos.get(j);
                int aToB = aInfo.findGiftCnt(bInfo.name);
                int bToA = bInfo.findGiftCnt(aInfo.name);
                if(aToB==bToA){
                    int aGiftValue = aInfo.giftValue;
                    int bGiftValue = bInfo.giftValue;
                    if(aGiftValue==bGiftValue)continue;
                    else if(aGiftValue>bGiftValue)aInfo.nextReceive();
                    else bInfo.nextReceive();
                }else if(aToB>bToA){
                    aInfo.nextReceive();
                }else{
                    bInfo.nextReceive();
                }
            }
            answer = Math.max(answer,aInfo.nextGift);
        }
        return answer;
    }
}