import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static boolean[] visited = new boolean[10];
	static int[] helloArr = {10000,0,1000,1,110,0,0};
	static int[] worldArr = {0,10000,0,1000,10,100,1};
	static int ans,n;
	static StringBuffer sb = new StringBuffer();
	static boolean solved;
	private static void solve(int depth, int hello, int world) {
		if(hello+world>n)return;
		if(depth==7) {
			if(hello+world==n) {
				sb.append(String.format("%7s",Integer.toString(hello))+'\n');
				sb.append("+"+String.format("%6s",Integer.toString(world))+'\n');
				sb.append("-------\n");
				sb.append(String.format("%7s",Integer.toString(hello+world)));
				solved = true;
			}
			return;
		}
		for(int i = 9;i>=0;i--) {
			if(depth<=1&&i==0)continue;
			if(!visited[i]) {
				visited[i] = true;
				solve(depth+1, hello+helloArr[depth]*i, world+worldArr[depth]*i);
				if(solved) return;
				visited[i] = false;
			}
		}
		
	}
	
	public static void main(String[] args) throws Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(in.readLine());
		solve(0,0,0);
		if(solved) {
			System.out.println(sb);
		}else {
			System.out.println("No Answer");
		}
		
	}
	

}