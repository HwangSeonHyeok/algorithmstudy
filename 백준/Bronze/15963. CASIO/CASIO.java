import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		String n = st.nextToken();
		String m = st.nextToken();
		if(n.equals(m))System.out.println(1);
		else System.out.println(0);

	}

}