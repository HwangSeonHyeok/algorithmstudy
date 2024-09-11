import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class Main {
	static class Team implements Comparable<Team> {
		BigInteger players;
		int stat;

		public Team(BigInteger players, int stat) {
			this.players = players;
			this.stat = stat;
		}

		@Override
		public int hashCode() {
			return this.players.hashCode();
		}

		@Override
		public int compareTo(Team o) {
			return this.players.compareTo(o.players);
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int[][] table = new int[n][n];
		String maxStr = "";
		for (int i = 0; i < n; i++) {
			String[] split = in.readLine().split(" ");
			maxStr += "1";
			for (int j = 0; j < n; j++) {
				table[i][j] = Integer.parseInt(split[j]);
			}
		}
		int half = n / 2;
		Set<BigInteger>[] dp = new HashSet[half + 1];
		for (int i = 0; i <= half; i++) {
			dp[i] = new HashSet<>();
		}
		BigInteger zero = new BigInteger("0");
		dp[0].add(new BigInteger("0"));
		for (int i = 0; i < half; i++) {
			Set<BigInteger> tList = dp[i];
			for (int j = 0; j < n; j++) {
				for (BigInteger t : tList) {
					if (!t.testBit(j)) {
						BigInteger nextP = t.setBit(j);
						dp[i + 1].add(nextP);
					}

				}
			}
		}

		int ans = Integer.MAX_VALUE;
		BigInteger max = new BigInteger(maxStr, 2);
		Set<BigInteger> completeTeam = dp[half];
		Set<BigInteger> visit = new HashSet<>();
		for (BigInteger t1 : completeTeam) {
			BigInteger t2 = max.xor(t1);
			if(visit.add(t1)&&visit.add(t2)) {
				int t1Stat = 0;
				int t2Stat = 0;
				for(int i = 0;i<t1.bitLength();i++) {
					if(t1.testBit(i)) {
						for(int j = i+1;j<t1.bitLength();j++) {
							if(t1.testBit(j)) {
								t1Stat+= table[i][j]+table[j][i];
							}
						}
					}
				}
				for(int i = 0;i<t2.bitLength();i++) {
					if(t2.testBit(i)) {
						for(int j = i+1;j<t2.bitLength();j++) {
							if(t2.testBit(j)) {
								t2Stat+= table[i][j]+table[j][i];
							}
						}
					}
				}
				int diff = Math.abs(t1Stat - t2Stat);
				if (ans > diff) {
					ans = diff;
				}
			}
		}

		System.out.println(ans);

	}

}