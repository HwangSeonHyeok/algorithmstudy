import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		float cnt = 0f;
		float sum = 0f;
		for (int i = 0; i < str.length(); i++) {
			char c = str.charAt(i);
			if (c == '+') {
				sum += 0.5;
			} else if (c == 'F') {
				cnt++;
				sum += 0f;
			} else {
				cnt++;
				sum += (4.0 - c + 'A');
			}
		}
		System.out.println(sum / cnt);
	}

}