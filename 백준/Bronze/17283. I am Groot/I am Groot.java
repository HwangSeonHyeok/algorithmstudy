import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        Double ratio = Double.parseDouble(in.readLine())/100;
        int ans = 0;
        int step = 1;
        n*=ratio;
        while(n>5){
            ans+= (int) (Math.pow(2,step++)*n);
            n*=ratio;
        }
        System.out.println(ans);
    }
}
