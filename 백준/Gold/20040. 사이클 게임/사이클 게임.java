import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int[] parent;

	static void initGroup(int n) {
		parent = new int[n];
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}

	static int findParent(int num) {
		if (parent[num] == num) {
			return num;
		}
		return parent[num] = findParent(parent[num]);
	}

	static boolean drawLine(int a, int b) {
		int parentA = findParent(a);
		int parentB = findParent(b);
		if (parentA == parentB) {
			return true;
		}
		parent[parentB] = parentA;
		return false;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		initGroup(n);
		int ans = 0;
		for (int i = 1; i <= m; i++) {
			st = new StringTokenizer(in.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			if (drawLine(a, b)) {
				ans = i;
				break;
			}
		}
		System.out.println(ans);

	}

}