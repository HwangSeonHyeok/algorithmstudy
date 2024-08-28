import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;



public class Main {
	
	private static class Node{
		public int vertex;
		public Node link;
		public int weight;
		
		public Node(int vertex, Node link, int weight) {
			this.vertex = vertex;
			this.link = link;
			this.weight = weight;
		}
		@Override
		public String toString() {
			return "Node [vertex=" + vertex + ", link=" + link + ", weight=" + weight + "]";
		}
		
		
	}
	
	
	public static final int INF = Integer.MAX_VALUE;
	
	static Node[] adjList ;
	
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String[] split = in.readLine().split(" ");
		int V = Integer.parseInt(split[0]);
		int E = Integer.parseInt(split[1]);
		
		int k = Integer.parseInt(in.readLine());
		adjList = new Node[V+1];
		
		for(int i = 0; i<E; i++) {
			split = in.readLine().split(" ");
			int u = Integer.parseInt(split[0]);
			int v = Integer.parseInt(split[1]);
			int w = Integer.parseInt(split[2]);
			adjList[u] = new Node(v,adjList[u],w); 
		}
		
		
		int[] distance = new int[V+1]; 
		boolean[] visited = new boolean[V+1]; 
		Arrays.fill(distance, INF);

		distance[k] = 0;

		int min = 0;
		int current = 0;
		
		for(int i = 1; i<=V;i++) {
			
			current = -1;
			min = INF;
			
			for (int j = 1; j <= V; j++) {
				if (!visited[j] && distance[j] < min) {
					min = distance[j];
					current = j;
				}
			}
			
			if(current == -1) {
				break;
			}
			
			visited[current] = true;
			
			for(Node temp = adjList[current]; temp!=null; temp = temp.link) {
				if(!visited[temp.vertex] && distance[temp.vertex]>min + temp.weight) {
					distance[temp.vertex] = min+temp.weight;
				}
			}
		}
		distance[k] = 0;
		for(int i = 1; i<=V; i++) {
			sb.append((distance[i] == Integer.MAX_VALUE ? "INF" : distance[i]));
			sb.append('\n');
		}
		System.out.println(sb.toString());
		
		
		
		
	}
	
}