import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static class App{
		int m,c;

		public App(int m) {
			this.m = m;
		}
		public void setC(int c) {
			this.c = c;
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		App[] aArray = new App[n+1];
		split = in.readLine().split(" ");
		for(int i = 1;i<=n;i++) {
			aArray[i] = new App(Integer.parseInt(split[i-1]));
		}
		split = in.readLine().split(" ");
		for(int i = 1;i<=n;i++) {
			aArray[i].setC(Integer.parseInt(split[i-1]));
		}
		int max = 100*100;
		int[][] dp = new int[n+1][max+1];
		for(int i = 1; i<=n;i++) {
			App app = aArray[i];
			for(int j = 0; j<=max;j++) {
				if(app.c<=j) {
					dp[i][j] = Math.max(dp[i-1][j],dp[i-1][j-app.c]+app.m);
				}else {
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		int ans = Integer.MAX_VALUE;
		for(int i = 0; i<=max;i++) {
			if(dp[n][i]>=m&&ans>i) {
				ans = i;
			}
		}
		System.out.println(ans);

	}

}