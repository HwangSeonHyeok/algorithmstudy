import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static int[] birth = new int[8];

	static int bioRhythm(String date) {
		int a = 0;
		int b = 0;
		int c = 0;
		for (int i = 0; i < 4; i++) {
			int num = date.charAt(i) - '0';
			a += Math.pow((num - birth[i]), 2);
		}
		for (int i = 4; i < 6; i++) {
			int num = date.charAt(i) - '0';
			b += Math.pow((num - birth[i]), 2);
		}
		for (int i = 6; i < 8; i++) {
			int num = date.charAt(i) - '0';
			c += Math.pow((num - birth[i]), 2);
		}

		return a * b * c;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String birthstr = in.readLine();
		for (int i = 0; i < 8; i++) {
			birth[i] = birthstr.charAt(i) - '0';
		}
		int max = -1;
		String ans = "99999999";
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			String date = in.readLine();
			int value = bioRhythm(date);
			if (value >= max || (value == max && ans.compareTo(date) >= 0)) {
				ans = date;
				max = value;
			}
		}
		System.out.println(ans);

	}

}
