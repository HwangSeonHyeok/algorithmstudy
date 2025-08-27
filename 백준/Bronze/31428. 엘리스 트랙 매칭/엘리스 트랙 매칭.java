import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int C = 0, S = 0, I = 0, A = 0;
		StringTokenizer st = new StringTokenizer(in.readLine());
		for (int i = 0; i < n; i++) {
			char c = st.nextToken().charAt(0);
			if (c == 'C') {
				C++;
			} else if (c == 'S') {
				S++;
			} else if (c == 'I') {
				I++;
			} else {
				A++;
			}
		}
		char c = in.readLine().charAt(0);
		if (c == 'C') {
			System.out.println(C);
		} else if (c == 'S') {
			System.out.println(S);
		} else if (c == 'I') {
			System.out.println(I);
		} else {
			System.out.println(A);
		}

	}

}