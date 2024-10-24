import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		int[] mine = new int[n];
		int[] master = new int[n];
		for (int i = 0; i < n; i++) {
			mine[i] = Integer.parseInt(split[i]);
		}

		split = in.readLine().split(" ");

		for (int i = 0; i < n; i++) {
			master[i] = Integer.parseInt(split[i]);
		}
		Arrays.sort(mine);
		Arrays.sort(master);
		int mineIdx = 0;
		int masterIdx = 0;
		while (mineIdx < n && masterIdx < n) {
			if (mine[mineIdx] < master[masterIdx++]) {
				mineIdx++;
			}
		}
		if (mineIdx >= master.length / 2 + 1) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}

	}

}