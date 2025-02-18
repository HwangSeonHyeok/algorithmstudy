import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws  Exception{
        BufferedReader in  = new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(in.readLine());
        if(x%3==1){
            System.out.println("U");
        }else if(x%3==2){
            System.out.println("O");
        }else{
            System.out.println("S");
        }

    }
}