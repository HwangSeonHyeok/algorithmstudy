import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int ans1 = 0;
		int ans2 = 0;
		for(int i = 1; i<=n;i++) {
			ans1 +=i;
			ans2 += i*i*i;
		}
		System.out.println(ans1);
		System.out.println(ans1*ans1);
		System.out.println(ans2);

	}

}