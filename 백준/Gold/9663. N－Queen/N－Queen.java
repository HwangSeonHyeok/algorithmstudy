import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static int board[];
	static int N, ans = 0;
	
	static void solve(int deep) {
		
		if(deep>N) {
			ans++;
			return;
		}
		
		for(int i = 1; i<=N; i++) {
			boolean isPossible = true;
			for(int j = 1; j<deep; j++) {
				if(j==deep) continue;
				if(board[j]==i) {
					isPossible = false;
					break;
				}
				if(Math.abs(board[j]-i)==deep-j) {
					isPossible = false;
					break;
				}
			}
			if(isPossible) {
				board[deep] = i;
				solve(deep+1);
			}
		}
	}
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(in.readLine());
		board = new int[N+1];
		solve(1);
		System.out.println(ans);
		

	}

}