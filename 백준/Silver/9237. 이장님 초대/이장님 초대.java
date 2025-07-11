import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        String[] split = in.readLine().split(" ");
        int[] trees = new int[n];
        int ans = 2;
        for(int i = 0; i<n;i++){
            trees[i] = -Integer.parseInt(split[i]);
        }
        Arrays.sort(trees);
        for(int i = 0; i<n;i++){
            ans = Math.max(2+i-trees[i],ans);
        }
        System.out.println(ans);

    }
}
