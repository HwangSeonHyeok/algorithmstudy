import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
	
	static int N;
	
	static int solve(int y, int x, int size) {
		if(size==1) {
			return 0;
		}
		
		int newSize = size/2;
		if(y<newSize&&x<newSize) {
			return solve(y,x,newSize);
		}else if(y<newSize&&x>=newSize) {
			return newSize*newSize+solve(y,x-newSize,newSize);
		}else if(y>=newSize&&x<newSize) {
			return newSize*newSize*2 + solve(y-newSize,x,newSize);
		}else {
			return newSize*newSize*3+solve(y-newSize,x-newSize,newSize);
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		N = Integer.parseInt(split[0]);
		int r = Integer.parseInt(split[1]);
		int c = Integer.parseInt(split[2]);
		System.out.println(solve(r,c,(int)Math.pow(2,N)));

	}

}