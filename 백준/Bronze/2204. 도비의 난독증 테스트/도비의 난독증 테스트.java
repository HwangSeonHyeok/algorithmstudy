import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		int n = 1;
		while (true) {
			n = Integer.parseInt(in.readLine());
			if (n == 0)
				break;
			String[] words = new String[n];
			for (int i = 0; i < n; i++) {
				words[i] = in.readLine();
			}
			Arrays.sort(words, new Comparator<String>() {
				@Override
				public int compare(String o1, String o2) {
					return o1.compareToIgnoreCase(o2);
				}
			});
			sb.append(words[0]).append('\n');
		}
		System.out.println(sb);

	}
}