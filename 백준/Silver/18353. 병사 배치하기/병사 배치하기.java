import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {
	static final int MAX_POWER = 10000001;

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		List<Integer> dp = new ArrayList<>();
		dp.add(MAX_POWER);
		for (int i = 0; i < n; i++) {
			int power = Integer.parseInt(split[i]);
			if (power < dp.get(dp.size() - 1)) {
				dp.add(power);
			} else {
				int left = 0;
				int right = dp.size();
				while (left < right) {
					int mid = (left + right) / 2;
					if (dp.get(mid) <= power) {
						right = mid;
					} else {
						left = mid + 1;
					}
				}
				dp.set(left, power);
			}
		}
		System.out.println(n + 1 - dp.size());

	}

}