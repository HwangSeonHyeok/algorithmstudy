import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static class Obj{
		int w, v;

		public Obj(int w, int v) {
			super();
			this.w = w;
			this.v = v;
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int k = Integer.parseInt(split[1]);
		int[][] dp = new int[n+1][k+1];
		Obj[] objArray = new Obj[n+1];
		for(int i = 1; i<=n;i++) {
			split = in.readLine().split(" ");
			objArray[i] = new Obj(Integer.parseInt(split[0]), Integer.parseInt(split[1]));
		}
		for(int i = 1; i<=n;i++) {
			Obj o = objArray[i];
			for(int j = 1; j<=k;j++) {
				if(j>=o.w) {
					dp[i][j]= Math.max(dp[i-1][j],dp[i-1][j-o.w]+o.v);
				}else {
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		System.out.println(dp[n][k]);
	}
}