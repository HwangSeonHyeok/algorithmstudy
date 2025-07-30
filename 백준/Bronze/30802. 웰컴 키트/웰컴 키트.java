import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		StringTokenizer st = new StringTokenizer(in.readLine());
		int[] shirtsSurvey = new int[6];
		for (int i = 0; i < 6; i++) {
			shirtsSurvey[i] = Integer.parseInt(st.nextToken());
		}
		st = new StringTokenizer(in.readLine());
		int t = Integer.parseInt(st.nextToken());
		int p = Integer.parseInt(st.nextToken());
		int tSet = 0;
		for (int i = 0; i < 6; i++) {
			tSet += shirtsSurvey[i] / t;
			if (shirtsSurvey[i] % t != 0)
				tSet++;
		}
		System.out.println(tSet);
		System.out.print(n / p);
		System.out.print(" ");
		System.out.println(n % p);

	}

}