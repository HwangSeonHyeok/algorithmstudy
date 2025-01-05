import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String aStr = in.readLine();
		String bStr = in.readLine();
		String cStr = in.readLine();
		int a = Integer.parseInt(aStr);
		int b = Integer.parseInt(bStr);
		int c = Integer.parseInt(cStr);
		System.out.println(a + b - c);
		int sum = Integer.parseInt(aStr + bStr);
		System.out.println(sum - c);
	}
}