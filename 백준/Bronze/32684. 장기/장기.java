import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	
	static double[] scores = {13,7,5,3,3,2};

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		double a = 0;
		double b= 1.5;
		String[] split = in.readLine().split(" ");
		for(int i = 0; i<6;i++) {
			a+=Double.parseDouble(split[i])*scores[i];
		}
		split = in.readLine().split(" ");
		for(int i = 0; i<6;i++) {
			b+=Double.parseDouble(split[i])*scores[i];
		}
		if(a>b) {
			System.out.println("cocjr0208");
		}else {
			System.out.println("ekwoo");
		}
		

	}

}