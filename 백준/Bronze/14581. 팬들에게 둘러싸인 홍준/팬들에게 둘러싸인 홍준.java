import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String hongjun = in.readLine();
		StringBuffer sb = new StringBuffer();
		sb.append(":fan::fan::fan:\n");
		sb.append(":fan::");
		sb.append(hongjun);
		sb.append("::fan:\n");
		sb.append(":fan::fan::fan:");
		System.out.println(sb);

	}

}