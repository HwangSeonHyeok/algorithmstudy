import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	static int[][] familyInfo = new int[1000001][2];

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		for (int i = 2; i <= 1000000; i++) {
			int cnt = 0;
			int last = -1;
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					if (j * j == i)
						cnt++;
					else
						cnt += 2;
					if (last == -1)
						last = j;
				}
			}
			familyInfo[i][0] = cnt;
			familyInfo[i][1] = last;

		}
		int t = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int i = 1; i <= t; i++) {
			StringTokenizer st = new StringTokenizer(in.readLine());
			int n = Integer.parseInt(st.nextToken());
			int m = Integer.parseInt(st.nextToken());
			int myBrothers = familyInfo[n][0];
			int ans = 0;
			for (int j = 2; j < n; j++) {
				if (familyInfo[j][0] == myBrothers && familyInfo[j][1] >= m) {
					ans++;
				}
			}
			sb.append("Case #").append(i).append(": ").append(ans).append('\n');
		}
		System.out.println(sb);

	}

}