import java.util.*;
class Solution {
    int[] dx = {1,0,0,-1};
    int[] dy = {0,-1,1,0};
    char[] direction = {'d','l','r','u'};
    boolean isInRange(int n, int m, int x, int y){
        return x>0&&y>0&&x<=n&&y<=m;
    }
    char[] route;
    boolean dfs(int n, int m, int x, int y, int r, int c, int k, int depth){
        int remainDist = Math.abs(r-x)+Math.abs(c-y);
        if(remainDist>k-depth)return false;
        if(x==r && y==c && depth==k){
            return true;
        }
        if(depth==k){
            return false;
        }
        for(int i = 0;i<4;i++){
            int nextX = x+dx[i];
            int nextY = y+dy[i];
            if(isInRange(n,m,nextX,nextY)){
                route[depth] = direction[i];
                if(dfs(n, m, nextX, nextY, r, c, k,depth+1)){
                    return true;
                }
            }
            
        }
        return false;
    }
    public String solution(int n, int m, int x, int y, int r, int c, int k) {
        route = new char[k];
        String answer = "";
        if((Math.abs(r-x)+Math.abs(c-y))%2==k%2&&dfs(n,m,x,y,r,c,k,0)){
            answer = new String(route);
        }else{
            answer = "impossible";
        }
        return answer;
    }
}