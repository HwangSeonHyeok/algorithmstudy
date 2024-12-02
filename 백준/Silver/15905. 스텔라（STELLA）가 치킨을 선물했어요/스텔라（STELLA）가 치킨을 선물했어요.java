import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
	static class Player implements Comparable<Player> {

		int q, p;

		public Player(int q, int p) {
			super();
			this.q = q;
			this.p = p;
		}

		@Override
		public int compareTo(Player o) {
			if (o.q == this.q) {
				return this.p - o.p;
			}
			return o.q - this.q;
		}

		@Override
		public String toString() {
			return "Player [q=" + q + ", p=" + p + "]";
		}

	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		Player[] players = new Player[n];
		for (int i = 0; i < n; i++) {
			String[] split = in.readLine().split(" ");
			int q = Integer.parseInt(split[0]);
			int p = Integer.parseInt(split[1]);
			players[i] = new Player(q, p);
		}
		Arrays.sort(players);
		int ans = 0;
		for (int i = 5; i < n; i++) {
			if (players[i].q == players[4].q) {
				ans++;
			} else {
				break;
			}

		}
		System.out.println(ans);

	}

}