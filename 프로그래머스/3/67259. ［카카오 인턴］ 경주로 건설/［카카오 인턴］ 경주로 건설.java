//dp로안풀릴거같은데 도전
class Solution {
    static class Point{
        int y,x, dir;
        public Point(int y, int x, int dir){
            this.y = y;
            this.x = x;
            this.dir = dir;
        }
    }
    static int[] dx = {1,0,-1,0};
    static int[] dy = {0,1,0,-1};
    int[][] globalBoard;
    int n;
    int ans = Integer.MAX_VALUE;
    int[][][] visited;
    public void dfs(Point p, int cost){
        if(p.x==n-1&&p.y==n-1){
            if(ans>cost){
                ans = cost;
            }
            return;
        }
        if(ans<cost){
            return;
        }
        for(int i = 0; i<4;i++){
            if(p.dir==(i+2)%4)continue;
            int nextY = p.y+dy[i];
            int nextX = p.x+dx[i];
            int nextCost = p.dir==i? cost+100:cost+600;
            if(nextY>=0&&nextX>=0
               &&nextY<n&&nextX<n
               && visited[nextY][nextX][i]>nextCost
               &&globalBoard[nextY][nextX]==0){
                visited[nextY][nextX][i] = nextCost;
                dfs(new Point(nextY,nextX,i),nextCost); 
            }
        }
    }
    public int solution(int[][] board) {

        n = board[0].length;
        globalBoard = new int[n][n];
        visited = new int[n][n][4];
        for(int i = 0;i<n;i++){
            for(int j =0; j<n;j++){
                globalBoard[i][j] = board[i][j];
                for(int k = 0;k<4;k++){
                    visited[i][j][k] = ans;
                }
            }
        }
        dfs(new Point(0,0,0),0);
        dfs(new Point(0,0,1),0);
        
        return ans;
    }
}