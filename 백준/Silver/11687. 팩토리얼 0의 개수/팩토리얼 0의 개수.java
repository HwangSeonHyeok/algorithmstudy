import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		long n = Integer.parseInt(in.readLine());
		long fiveN = 0;
		long i = 5;
		while (fiveN < n) {
			long tmp = i;
			while (tmp > 0 && tmp % 5 == 0) {
				tmp /= 5;
				fiveN++;
			}
			i += 5;
		}
		if (fiveN == n) {
			System.out.println(i - 5);
		} else {
			System.out.println(-1);
		}

	}

}