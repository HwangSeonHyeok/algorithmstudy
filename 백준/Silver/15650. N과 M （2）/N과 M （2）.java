import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	static int N, M;
	static int[] numbers;

	static void permutation(int cnt, int start) {
		if (cnt == M) {
			for (int i = 0; i < M; i++) {
				System.out.print(numbers[i] + " ");
			}
			System.out.println();
			return;
		}

		for (int i = start; i < N; i++) {

			numbers[cnt] = i+1;
			permutation(cnt + 1, i + 1);

		}

	}

	public static void main(String[] args) throws IOException {

		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		String[] split = in.readLine().split(" ");
		N = Integer.parseInt(split[0]);
		M = Integer.parseInt(split[1]);

		
		numbers = new int[N];

		permutation(0,0);

	}
}