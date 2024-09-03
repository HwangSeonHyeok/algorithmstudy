import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int ans = 0;
		if(n==4||n==7) {
			ans = -1;
		}else if(n%10==1||n%10==6) {
			ans = (n/5-1)+2;
		}else if(n%10==2||n%10==7) {
			ans = (n/5-2)+4;
		}else if(n%10==3||n%10==8) {
			ans = (n/5)+1;
		}else if(n%10==4||n%10==9) {
			ans = (n/5-1)+3;
		}else if(n%10==5||n%10==0) {
			ans = (n/5);
		}
		System.out.println(ans);
	}
}