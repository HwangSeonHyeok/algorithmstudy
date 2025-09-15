import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		double n = Double.parseDouble(in.readLine());
		double ans1 = n * 0.78;
		double ans2 = n - n * 0.044;
		StringBuilder sb = new StringBuilder();
		sb.append((int) ans1).append(" ").append((int) ans2);
		System.out.println(sb);

	}

}