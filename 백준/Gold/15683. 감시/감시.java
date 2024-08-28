import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {

	static int N, M, ans = 1000000000;
	static int[] dx = { 1, 0, -1, 0 };
	static int[] dy = { 0, -1, 0, 1 };
	static int[][] samusil;
	static int[][] watching;
	static List<CCTV> cctvList = new ArrayList<CCTV>();

	static class CCTV {
		int type;
		int x;
		int y;

		public CCTV(int type, int x, int y) {

			this.type = type;
			this.x = x;
			this.y = y;
		}

	}
	
	static void cctvOn(int startX, int startY, int direction) {
		int curX = startX;
		int curY = startY;
		while (true) {
			if (curX < 0 || curY < 0 || curX >= M || curY >= N||samusil[curY][curX]==6) {
				break;
			}
			watching[curY][curX]++;
			curY += dy[direction];
			curX += dx[direction];
		}
		
	}
	
	static void cctvOff(int startX, int startY, int direction) {
		int curX = startX;
		int curY = startY;
		while (true) {
			if (curX < 0 || curY < 0 || curX >= M || curY >= N||samusil[curY][curX]==6) {
				break;
			}
			watching[curY][curX]--;
			curY += dy[direction];
			curX += dx[direction];
		}
		
	}

	static void permutation(int cnt) {
		if (cnt == cctvList.size()) {
			int blindSpot = 0;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (watching[i][j] == 0) {
						blindSpot++;
					}
				}
			}
			if (ans > blindSpot) {
				ans = blindSpot;
			}
			return;
		}
		for (int i = 0; i < 4; i++) {
			CCTV curCCTV = cctvList.get(cnt);
			if (curCCTV.type == 1) {
				int curX = curCCTV.x;
				int curY = curCCTV.y;
				cctvOn(curX,curY,i);
				permutation(cnt + 1);
				cctvOff(curX,curY,i);
			}else if(curCCTV.type==2) {
				int curX = curCCTV.x;
				int curY = curCCTV.y;
				cctvOn(curX,curY,i);
				cctvOn(curX,curY,(i+2)%4);
				permutation(cnt+1);
				cctvOff(curX,curY,i);
				cctvOff(curX,curY,(i+2)%4);
			}else if(curCCTV.type==3) {
				int curX = curCCTV.x;
				int curY = curCCTV.y;
				cctvOn(curX,curY,i);
				cctvOn(curX,curY,(i+1)%4);
				permutation(cnt+1);
				cctvOff(curX,curY,i);
				cctvOff(curX,curY,(i+1)%4);
			}else if(curCCTV.type==4) {
				int curX = curCCTV.x;
				int curY = curCCTV.y;
				cctvOn(curX,curY,i);
				cctvOn(curX,curY,(i+1)%4);
				cctvOn(curX,curY,(i+3)%4);
				permutation(cnt+1);
				cctvOff(curX,curY,i);
				cctvOff(curX,curY,(i+1)%4);
				cctvOff(curX,curY,(i+3)%4);
				
			}else if(curCCTV.type==5) {
				int curX = curCCTV.x;
				int curY = curCCTV.y;
				for(int j = 0; j<4; j++) {
					cctvOn(curX,curY,j);
				}
				permutation(cnt+1);
				for(int j = 0; j<4; j++) {
					cctvOff(curX,curY,j);
				}
				
			}

			
		}

	}

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		String[] split = in.readLine().split(" ");

		N = Integer.parseInt(split[0]);
		M = Integer.parseInt(split[1]);

		samusil = new int[N][M];
		watching = new int[N][M];
		for (int i = 0; i < N; i++) {
			String[] split2 = in.readLine().split(" ");
			for (int j = 0; j < M; j++) {
				int num = Integer.parseInt(split2[j]);
				samusil[i][j] = num;
				if(num>0&&num<=5) {
					cctvList.add(new CCTV(num, j, i));
				}
				if(num==6) {
					watching[i][j] = 10;
				}
			}
		}
		
		permutation(0);
		System.out.println(ans);


	}

}