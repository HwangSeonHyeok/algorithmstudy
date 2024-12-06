import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static int[] arr;
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int k = Integer.parseInt(split[1]);
		arr = new int[n];
		split = in.readLine().split(" ");
		for(int i = 0; i<n;i++) {
			arr[i] = Integer.parseInt(split[i]);
		}
		int left = 0,right=0;
		int ans = 0;
		int[] nums = new int[100001];
		while(right<n) {
			nums[arr[right]]++;
			while(nums[arr[right]]>k) {
				nums[arr[left++]]--;
			}
			if(ans<right-left+1) {
				ans = right-left+1;
			}
			
			right++;
		}
		System.out.println(ans);
		
	}

}