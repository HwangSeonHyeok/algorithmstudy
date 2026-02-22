import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		Set<String> set = new HashSet<String>();
		StringTokenizer Recipe = new StringTokenizer(in.readLine());
		StringTokenizer current = new StringTokenizer(in.readLine());
		for (int i = 0; i < n - 1; i++) {
			set.add(current.nextToken());
		}
		for (int i = 0; i < n; i++) {
			String ingre = Recipe.nextToken();
			if (!set.contains(ingre)) {
				System.out.println(ingre);
				break;
			}
		}

	}

}