import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Set;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		Set<String> set = new HashSet<String>();
		set.add("Never gonna give you up");
		set.add("Never gonna let you down");
		set.add("Never gonna run around and desert you");
		set.add("Never gonna make you cry");
		set.add("Never gonna say goodbye");
		set.add("Never gonna tell a lie and hurt you");
		set.add("Never gonna stop");
		for (int i = 0; i < n; i++) {
			String str = in.readLine();
			if (!set.contains(str)) {
				System.out.println("Yes");
				return;
			}
		}
		System.out.println("No");

	}

}