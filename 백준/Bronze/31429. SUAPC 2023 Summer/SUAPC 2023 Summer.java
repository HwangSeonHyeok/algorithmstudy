import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	static int[] score = { 12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6 };
	static int[] penalty = { 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773 };

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine()) - 1;
		System.out.println(score[n] + " " + penalty[n]);
	}

}