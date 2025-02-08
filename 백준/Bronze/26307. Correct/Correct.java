import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String[] split = in.readLine().split(" ");
        int hh = Integer.parseInt(split[0]);
        int mm = Integer.parseInt(split[1]);
        int ans = (hh-9)*60+mm;
        System.out.println(ans);

    }
}