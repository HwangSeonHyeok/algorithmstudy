import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		Long n = Long.parseLong(in.readLine());
		Double len = Math.sqrt(n);
		System.out.println(len * 4);

	}

}