import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			String line = in.readLine();
			if(line.equals("#"))break;
			int cnt = 0;
			for (int i = 0; i < line.length(); i++) {
				char c = line.charAt(i);
				if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'
						||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
					cnt++;
				}
			}
			System.out.println(cnt);
		}
	}

}