import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws  Exception{
        BufferedReader in  = new BufferedReader(new InputStreamReader(System.in));
        String[] split = in.readLine().split(" ");
        int[] people = new int[5];
        for(int i = 1; i<=4;i++){
            people[i] = Integer.parseInt(split[i-1]);
        }
        split = in.readLine().split(" ");
        int x = Integer.parseInt(split[0]);
        int ans = 0;
        for(int i = 1;i<=4;i++){
            if(people[i]==x){
                ans = i;
            }
        }
        System.out.println(ans);

    }
}