import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Queue;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		Queue<Integer> q  = new PriorityQueue<>(new Comparator<Integer>() {
			
			@Override
			public int compare(Integer o1, Integer o2) {
				if(Math.abs(o1) == Math.abs(o2)) {
					return o1-o2;
				}
				return Math.abs(o1)-Math.abs(o2);
				
			}
			
		});
		
		int n = Integer.parseInt(in.readLine());
		for(int i = 0; i<n; i++) {
			int cmd = Integer.parseInt(in.readLine());
			if(cmd==0) {
				if(q.isEmpty()) {
					System.out.println(0);
				}else {
					Integer integer = q.poll();
					System.out.println(integer);
				}
			}else {
				q.add(cmd);
			}
			
		}
	}
}