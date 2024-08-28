import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static int N, ans= Integer.MAX_VALUE;
	static int ingr[][];
	
	static void cooking(int idx, int sour, int bitter, int cnt) {
		if(idx==N) {
			if(cnt==0) return;
			int diff = Math.abs(sour-bitter);
			if(ans>diff) {
				ans = diff;
			}
			return;
		}
		
		cooking(idx+1,sour*ingr[idx][0], bitter+ingr[idx][1],cnt+1);
		cooking(idx+1,sour, bitter,cnt);
		
	}

	public static void main(String[] args) throws IOException {
		
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		
		
		N = Integer.parseInt(in.readLine());
		ingr = new int[N][2];
		
		for(int i = 0;i<N; i++) {
			String[] split = in.readLine().split(" ");
			ingr[i][0] = Integer.parseInt(split[0]);
			ingr[i][1] = Integer.parseInt(split[1]);
		}
		cooking(0,1,0,0);
		System.out.println(ans);
		
	}

}