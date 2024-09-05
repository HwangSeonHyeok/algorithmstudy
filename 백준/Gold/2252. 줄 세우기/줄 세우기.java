import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

public class Main {
	static class Student{
		int vertex;
		Student link;
		public Student(int vertex, Student link) {
			this.vertex = vertex;
			this.link = link;
		}
		
	}
	static int[] inCnt;
	static Student[] sArr;

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		inCnt = new int[n+1];
		sArr = new Student[n+1];
		for(int i = 0; i<m; i++) {
			split = in.readLine().split(" ");
			int from = Integer.parseInt(split[0]);
			int to = Integer.parseInt(split[1]);
			sArr[from]= new Student(to,sArr[from]);
			inCnt[to]++;
		}
		
		List<Integer> ans = new ArrayList<>();
		Queue<Integer> q = new ArrayDeque<>();
		for(int i = 1; i<=n;i++) {
			if(inCnt[i]==0) {
				q.add(i);
			}
		}
		while(!q.isEmpty()) {
			int sNum = q.poll();
			ans.add(sNum);
			Student student = sArr[sNum];
			while(student != null) {
				inCnt[student.vertex]--;
				if(inCnt[student.vertex]==0) {
					q.add(student.vertex);
				}
				student = student.link;
			}
		}
		for(int i = 0; i<n;i++) {
			sb.append(ans.get(i)+" ");
		}
		System.out.print(sb);
	}

}