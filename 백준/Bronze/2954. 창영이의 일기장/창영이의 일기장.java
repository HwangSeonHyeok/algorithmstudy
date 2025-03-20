import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		str = str.replace("apa", "a");
		str = str.replace("epe", "e");
		str = str.replace("ipi", "i");
		str = str.replace("opo", "o");
		str = str.replace("upu", "u");
		System.out.println(str);
	}

}
