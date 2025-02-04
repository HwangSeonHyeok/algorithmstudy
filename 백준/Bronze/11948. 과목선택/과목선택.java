import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int ans = 0;
        int min = 101;
        for(int i = 0; i<4;i++){
            int score = Integer.parseInt(in.readLine());
            ans+=score;
            if(min>score)min=score;
        }
        ans-=min;
        int a = Integer.parseInt(in.readLine());
        int b = Integer.parseInt(in.readLine());
        ans += Math.max(a,b);
        System.out.println(ans);

    }
}