import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int w = Integer.parseInt(split[1]);
		int h = Integer.parseInt(split[2]);
		int l = Integer.parseInt(split[3]);
		int space = (w / l) * (h / l);
		System.out.println(Math.min(n, space));

	}

}