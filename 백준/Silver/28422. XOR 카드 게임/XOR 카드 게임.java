import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		int[] cards = new int[n];
		for(int i = 0; i<n;i++) {
			cards[i] = Integer.parseInt(split[i]);
		}
		int[] dp = new int[n+1];
		dp[0] = 0;
		dp[1] = 0;
		for(int i = 2; i<=n;i++) {
			if(i==n-1) {
				dp[n-1] = 0;
				continue;
			}
			if(i!=3) {
				dp[i] = Integer.max(dp[i],dp[i-2]+Integer.bitCount(cards[i-1]^cards[i-2]));
			}
			if(i!=2&&i!=4) {
				dp[i] = Integer.max(dp[i],dp[i-3]+Integer.bitCount(cards[i-1]^cards[i-2]^cards[i-3]));
			}
		}
		System.out.println(dp[n]);
	}

}