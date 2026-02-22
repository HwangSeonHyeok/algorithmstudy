import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		BigInteger[] fibo = new BigInteger[491];
		fibo[0] = new BigInteger("0");
		fibo[1] = new BigInteger("1");
		for (int i = 2; i < fibo.length; i++) {
			fibo[i] = fibo[i - 1].add(fibo[i - 2]);
		}
		while (true) {
			int n = Integer.parseInt(in.readLine());
			if (n == -1)
				break;
			sb.append("Hour ").append(n).append(": ").append(fibo[n]).append(" cow(s) affected\n");
		}
		System.out.println(sb);

	}

}