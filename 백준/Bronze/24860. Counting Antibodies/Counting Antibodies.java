import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		long v1 = Long.parseLong(split[0]);
		long j1 = Long.parseLong(split[1]);
		split = in.readLine().split(" ");
		long v2 = Long.parseLong(split[0]);
		long j2 = Long.parseLong(split[1]);
		split = in.readLine().split(" ");
		long v3 = Long.parseLong(split[0]);
		long j3 = Long.parseLong(split[1]);
		long d3 = Long.parseLong(split[2]);
		System.out.println((v1 * j1 + v2 * j2) * v3 * j3 * d3);

	}
}
