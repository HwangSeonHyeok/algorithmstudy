import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	static class University implements Comparable<University> {
		String name;
		int drink;

		public University(String name, int drink) {
			super();
			this.name = name;
			this.drink = drink;
		}

		@Override
		public int compareTo(University o) {
			return o.drink - this.drink;
		}

	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int tc = 0; tc < t; tc++) {
			int n = Integer.parseInt(in.readLine());
			University[] universities = new University[n];
			for (int i = 0; i < n; i++) {
				StringTokenizer st = new StringTokenizer(in.readLine());
				universities[i] = new University(st.nextToken(), Integer.parseInt(st.nextToken()));
			}
			Arrays.sort(universities);
			sb.append(universities[0].name).append('\n');
		}
		System.out.println(sb);

	}

}