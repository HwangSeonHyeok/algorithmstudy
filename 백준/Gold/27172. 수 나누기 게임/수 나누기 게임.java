import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		int[] cardArr = new int[n];
		
		int[] score = new int[n];
		int max = 0;
		for (int i = 0; i < n; i++) {
			cardArr[i] = Integer.parseInt(split[i]);
			if(max<cardArr[i]) {
				max = cardArr[i];
			}
		}
		List<Integer>[]dList  = new ArrayList[max+1];
		for(int i = 0; i<max+1;i++) {
			dList[i] = new ArrayList<>();
		}
		for(int i = 0; i<n;i++) {
			int current = cardArr[i]*2;
			while(current<=max) {
				dList[current].add(i);
				current += cardArr[i];
			}
		}
		for(int i = 0; i<n;i++) {
			score[i]-=dList[cardArr[i]].size();
			for(int idx :dList[cardArr[i]]) {
				score[idx]++;
			}
		}
		for(int s :score) {
			sb.append(s+" ");
		}
		System.out.println(sb);
	}
}