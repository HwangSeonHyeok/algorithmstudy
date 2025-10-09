import java.util.*;
class Solution {
    List<Integer>[] tree;
    boolean[] choice;
    int ans = 0;
    void solve(int[] info, int current, int sheep, int wolves){
        if(wolves>=sheep||sheep+wolves==info.length){
            if(sheep>ans){
                ans = sheep;
            }
            return;
        }
        for(int next: tree[current]){
            choice[next] = true;
        }
        for(int i = 0; i<choice.length;i++){
            if(choice[i]){
                choice[i] = false;
                for(int child:tree[i]){
                    choice[child] = true;
                }
                if(info[i]==0){
                    solve(info, i, sheep+1,wolves);
                }else{
                    solve(info, i, sheep,wolves+1);    
                }
                choice[i] = true;
                for(int child:tree[i]){
                    choice[child] = false;
                }
            }
        }
        for(int next: tree[current]){
            choice[next] = false;
        }   
    }
        
    public int solution(int[] info, int[][] edges) {
        choice = new boolean[info.length];
        tree = new ArrayList[info.length];
        for(int i = 0; i<info.length;i++){
            tree[i] = new ArrayList<>();
        }
        for(int[] arr: edges){
            int parent = arr[0];
            int child = arr[1];
            tree[parent].add(child);
        }
        solve(info,0,1,0);
        return ans;
    }
}