import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		while (true) {
			int n = Integer.parseInt(in.readLine());
			if (n == 0)
				break;
			float max = 0;
			List<String> list = new ArrayList<>();
			for (int i = 0; i < n; i++) {
				String[] split = in.readLine().split(" ");
				float height = Float.parseFloat(split[1]);
				if (height > max) {
					max = height;
					list.clear();
					list.add(split[0]);
				} else if (height == max) {
					list.add(split[0]);
				}
			}
			for (String name : list) {
				sb.append(name).append(" ");
			}
			sb.append("\n");

		}
		System.out.println(sb);

	}

}
