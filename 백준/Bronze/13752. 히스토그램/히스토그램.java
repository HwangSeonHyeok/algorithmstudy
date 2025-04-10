import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        StringBuffer sb = new StringBuffer();
        for(int i = 0; i<n; i++){
            int num = Integer.parseInt(in.readLine());
            for(int j = 0; j<num; j++){
                sb.append('=');
            }
            sb.append('\n');
        }
        System.out.println(sb);
    }
}
