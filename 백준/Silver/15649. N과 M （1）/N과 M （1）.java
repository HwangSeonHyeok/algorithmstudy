import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static int N, M;
	static boolean[] isSelected;
	static int[] numbers;
	
	
	static void permutation(int cnt) {
		if(cnt==M) {
			for(int i = 0; i<M;i++) {
				System.out.print(numbers[i] + " ");
			}
			System.out.println();
			return;
		}
		
		for(int i= 1; i<=N; i++) {
			if(!isSelected[i]) {
				numbers[cnt] = i;
				isSelected[i] = true;
				permutation(cnt+1);
				isSelected[i] = false;
			}
		}
		
	}

	public static void main(String[] args) throws IOException {
		
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		
		String[] split = in.readLine().split(" ");
		N = Integer.parseInt(split[0]);
		M = Integer.parseInt(split[1]);
		
		isSelected = new boolean[N+1];
		numbers = new int[N];
		
		permutation(0);
		

	}

}