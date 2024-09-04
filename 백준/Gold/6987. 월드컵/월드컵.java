import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static int[][] result = new int[6][3];
	static int[][] tmp = new int[6][3];
	static boolean[][] visited = new boolean[6][6];
	static boolean ans = false;

	static void solve(int team1, int team2, int gamecnt) {
		if (ans)
			return;
		if (gamecnt == 15) {
			ans = true;
			return;
		}
		if (team2 == 6) {
			team1++;
			team2 = team1 + 1;
		}

		if (tmp[team1][0] < result[team1][0] && tmp[team2][2] < result[team2][2]) {
			tmp[team1][0]++;
			tmp[team2][2]++;
			solve(team1, team2 + 1, gamecnt + 1);
			tmp[team1][0]--;
			tmp[team2][2]--;
		}
		if (tmp[team1][1] < result[team1][1] && tmp[team2][1] < result[team2][1]) {
			tmp[team1][1]++;
			tmp[team2][1]++;
			solve(team1, team2 + 1, gamecnt + 1);
			tmp[team1][1]--;
			tmp[team2][1]--;
		}
		if (tmp[team1][2] < result[team1][2] && tmp[team2][0] < result[team2][0]) {
			tmp[team1][2]++;
			tmp[team2][0]++;
			solve(team1, team2 + 1, gamecnt + 1);
			tmp[team1][2]--;
			tmp[team2][0]--;
		}

		return;

	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		for (int i = 0; i < 4; i++) {
			String[] split = in.readLine().split(" ");
			for (int j = 0; j < 18; j++) {
				result[j / 3][j % 3] = Integer.parseInt(split[j]);

			}
			ans = false;
			boolean isError = false;
			for(int j = 0; j<6;j++) {
				int sum = result[j][0]+result[j][1]+result[j][2];
				if(sum!=5) {
					isError = true;
				}
			}
			if(!isError) {
				solve(0, 1, 0);
			}
			if (ans) {
				System.out.print(1 + " ");
			} else {
				System.out.print(0 + " ");
			}
		}
	}

}