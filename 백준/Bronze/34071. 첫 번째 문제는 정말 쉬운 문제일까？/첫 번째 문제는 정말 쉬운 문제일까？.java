import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int first = Integer.parseInt(in.readLine());
		int max = first;
		int min = first;
		for (int i = 1; i < n; i++) {
			int difficult = Integer.parseInt(in.readLine());
			max = Math.max(max, difficult);
			min = Math.min(min, difficult);
		}
		if (first == max) {
			System.out.println("hard");
		} else if (first == min) {
			System.out.println("ez");
		} else {
			System.out.println("?");
		}

	}

}