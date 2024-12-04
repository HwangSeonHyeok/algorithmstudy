import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int ans = 0;
		for(int i= 0;i<n;i++) {
			String[] split = in.readLine().split(" ");
			int a = Integer.parseInt(split[0]);
			int dg = Integer.parseInt(split[1])+Integer.parseInt(split[2]);
			int score = a*(dg);
			if(a==dg)score*=2;
			if(ans<score)ans=score;
		}
		System.out.println(ans);
	}

}