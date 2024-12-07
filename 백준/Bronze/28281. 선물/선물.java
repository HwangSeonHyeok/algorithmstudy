import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int x = Integer.parseInt(split[1]);
		split = in.readLine().split(" ");
		int[] arr = new int[n+1];
		for(int i = 1; i<=n;i++) {
			arr[i] = arr[i-1]+Integer.parseInt(split[i-1]);
		}
		int ans = Integer.MAX_VALUE;
		for(int i = 2; i<=n;i++) {
			int sum = (arr[i]-arr[i-2])*x;
			if(sum<ans) {
				ans = sum;
			}
		}
		System.out.println(ans);

	}

}