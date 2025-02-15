import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws  Exception{
        BufferedReader in  = new BufferedReader(new InputStreamReader(System.in));
        String[] split = in.readLine().split(" ");
        int n = Integer.parseInt(split[0]);
        int x = Integer.parseInt(split[1]);
        int ans = -1;
        for(int i = 0; i<n;i++){
            split = in.readLine().split(" ");
            int a = Integer.parseInt(split[0]);
            int b = Integer.parseInt(split[1]);
            if(a+b<=x&&a>ans){
                ans=a;
            }
        }
        System.out.println(ans);

    }
}