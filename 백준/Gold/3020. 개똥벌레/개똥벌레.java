import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int h = Integer.parseInt(st.nextToken());
		int[] walls = new int[h + 2];
		for (int i = 0; i < n; i++) {
			int wall = Integer.parseInt(in.readLine());
			if (i % 2 == 0) {
				walls[0]++;
				walls[wall + 1]--;
			} else {
				walls[h - wall + 1]++;
			}
		}
		int min = Integer.MAX_VALUE;
		int cnt = 0;
		for (int i = 1; i <= h; i++) {
			walls[i] += walls[i - 1];
			if (walls[i] < min) {
				min = walls[i];
				cnt = 1;
			} else if (walls[i] == min)
				cnt++;
		}
		System.out.println(min + " " + cnt);

	}

}