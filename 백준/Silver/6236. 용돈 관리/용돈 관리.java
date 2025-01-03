import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	static int n, m, maxMoney;

	static int[] money;

	static boolean isPossible(int mid) {
		int sum = 0;
		int cnt = 1;
		for (int i = 0; i < n; i++) {
			sum += money[i];
			if (sum > mid) {
				cnt++;
				sum = money[i];
			}

			if (cnt > m)
				return false;

		}
		return true;
	}

	static int solve() {
		int left = maxMoney;
		int right = (int) 1e9;
		int ans = 0;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (isPossible(mid)) {
				ans = mid;
				right = mid - 1;
			} else {
				left = mid + 1;
			}

		}

		return ans;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		n = Integer.parseInt(split[0]);
		m = Integer.parseInt(split[1]);
		money = new int[n];
		for (int i = 0; i < n; i++) {
			money[i] = Integer.parseInt(in.readLine());
			if (maxMoney < money[i])
				maxMoney = money[i];
		}
		int ans = solve();
		System.out.println(ans);

	}

}