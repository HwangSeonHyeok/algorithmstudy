import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		for(int tc = 1; tc <= n; tc++) {
            String[] split = in.readLine().split(" ");
            String s = split[0];
            String p = split[1];
            
            int ans = 0;
            int i = 0;
            
            while (i < s.length()) {
                boolean found = false;
                if (i <= s.length() - p.length()) {
                    found = true;
                    for (int j = 0; j < p.length(); j++) {
                        if (s.charAt(i + j) != p.charAt(j)) {
                            found = false;
                            break;
                        }
                    }
                }
                
                if (found) {
                    ans++;
                    i += p.length();
                } else {
                    ans++;
                    i++;
                }
            }
            
            System.out.println(ans);
        }

	}

}