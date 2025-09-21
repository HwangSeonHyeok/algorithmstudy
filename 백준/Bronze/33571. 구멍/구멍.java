import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		char[] S = in.readLine().toCharArray();
		Map<Character, Integer> map = new HashMap<Character, Integer>();
		map.put('A', 1);
		map.put('a', 1);
		map.put('B', 2);
		map.put('b', 1);
		map.put('D', 1);
		map.put('d', 1);
		map.put('e', 1);
		map.put('g', 1);
		map.put('O', 1);
		map.put('o', 1);
		map.put('P', 1);
		map.put('p', 1);
		map.put('Q', 1);
		map.put('q', 1);
		map.put('R', 1);
		map.put('@', 1);
		int ans = 0;
		for (char c : S) {
			if (map.containsKey(c)) {
				ans += map.get(c);
			}
		}
		System.out.println(ans);
	}

}