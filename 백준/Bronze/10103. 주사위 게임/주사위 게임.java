import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws  Exception{
        BufferedReader in  = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        int A = 100;
        int B = 100;
        for(int i = 0; i<n; i++){
            String[] split=  in.readLine().split(" ");
            int a = Integer.parseInt(split[0]);
            int b = Integer.parseInt(split[1]);
            if(a>b){
                B-=a;
            } else if(a<b){
                A-=b;
            }
        }
        System.out.println(A);
        System.out.println(B);

    }
}