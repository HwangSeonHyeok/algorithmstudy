import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		Double h = Double.parseDouble(st.nextToken());
		Double w = Double.parseDouble(st.nextToken());
		Double sasun = Math.sqrt(h * h + w * w);
		System.out.println(Math.abs(h + w - sasun));

	}

}