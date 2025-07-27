import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int a = Integer.parseInt(st.nextToken());
		int b = Integer.parseInt(st.nextToken());
		int c = Integer.parseInt(st.nextToken());
		int time = Integer.parseInt(in.readLine());
		if (time > 30) {
			int additionalTime = time - 30;
			int timeCost = (additionalTime / b) * c;
			if (additionalTime % b != 0) {
				timeCost += c;
			}
			a += timeCost;
		}
		System.out.println(a);
	}
}