import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        if(n==0){
            System.out.println("YONSEI");
        }else{
            System.out.println("Leading the Way to the Future");
        }
    }
}