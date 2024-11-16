import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static boolean[] alph = new boolean[26];

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String mobis = in.readLine();
		for (int i = 0; i < mobis.length(); i++) {
			alph[mobis.charAt(i) - 'A'] = true;
		}
		if (alph['M' - 'A'] && alph['O' - 'A'] && alph['B' - 'A'] && alph['I' - 'A'] && alph['S' - 'A']) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}

	}

}