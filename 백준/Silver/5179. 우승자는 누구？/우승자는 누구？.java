import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;

public class Main {
	static class Player implements Comparable<Player> {
		int ID, points;
		Set<Integer> correctP;
		int[] incorrectCnt;

		public Player(int iD) {
			ID = iD;
			correctP = new HashSet<>();
			incorrectCnt = new int[11];
		}

		public void correct(int problem, int points) {
			this.points += points;
			correctP.add(problem);
		}

		public void incorrect(int problem) {
			incorrectCnt[problem]++;
		}

		@Override
		public int compareTo(Player o) {
			if (this.correctP.size() == o.correctP.size()) {
				return this.points - o.points;
			}
			return o.correctP.size() - this.correctP.size();
		}

	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int k = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int t = 1; t <= k; t++) {
			StringTokenizer st = new StringTokenizer(in.readLine());
			int m = Integer.parseInt(st.nextToken());
			int n = Integer.parseInt(st.nextToken());
			int p = Integer.parseInt(st.nextToken());
			Player[] players = new Player[p];
			for (int i = 1; i <= p; i++) {
				players[i - 1] = new Player(i);
			}
			for (int i = 0; i < n; i++) {
				st = new StringTokenizer(in.readLine());
				int id = Integer.parseInt(st.nextToken()) - 1;
				int problem = st.nextToken().charAt(0) - 'A';
				int time = Integer.parseInt(st.nextToken());
				int isCorrect = Integer.parseInt(st.nextToken());
				if (players[id].correctP.contains(problem))
					continue;
				if (isCorrect == 1) {
					players[id].correct(problem, time + 20 * players[id].incorrectCnt[problem]);
				} else {
					players[id].incorrect(problem);
				}

			}
			Arrays.sort(players);
			sb.append("Data Set ").append(t).append(":\n");
			for (Player player : players) {
				sb.append(player.ID).append(" ").append(player.correctP.size()).append(" ").append(player.points)
						.append('\n');
			}
			sb.append('\n');

		}
		System.out.println(sb);

	}

}