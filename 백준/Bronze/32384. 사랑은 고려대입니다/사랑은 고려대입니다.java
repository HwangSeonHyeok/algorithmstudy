import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws  Exception{
        BufferedReader in  = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int n = Integer.parseInt(in.readLine());
        for(int i = 0; i<n; i++){
            sb.append("LoveisKoreaUniversity ");
        }
        System.out.println(sb);
    }
}