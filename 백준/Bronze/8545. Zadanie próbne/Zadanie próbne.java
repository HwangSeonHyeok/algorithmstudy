import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String str = in.readLine();
        for(int i = str.length()-1;i>=0;i--){
            sb.append(str.charAt(i));
        }
        System.out.println(sb);

    }
}
