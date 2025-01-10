import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String caesar = in.readLine();
        for(int i = 0; i<caesar.length();i++){
            char c = caesar.charAt(i);
            c -= 3;
            if(c<'A')c+=26;
            sb.append(c);
        }
        System.out.println(sb);

    }
}