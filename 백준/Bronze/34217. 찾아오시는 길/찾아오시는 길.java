import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int hanyang = Integer.parseInt(st.nextToken());
		int yongdap = Integer.parseInt(st.nextToken());
		st = new StringTokenizer(in.readLine());
		hanyang += Integer.parseInt(st.nextToken());
		yongdap += Integer.parseInt(st.nextToken());
		if (hanyang < yongdap) {
			System.out.println("Hanyang Univ.");
		} else if (hanyang > yongdap) {
			System.out.println("Yongdap");
		} else {
			System.out.println("Either");
		}

	}

}