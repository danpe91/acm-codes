import java.util.*;

class Main {
	
	public static void main(String[] a) {

		java.util.Scanner sc = new java.util.Scanner(System.in);
		int t;
		t = sc.nextInt();
			sc.nextLine();
		for ( int i = 0; i < t; i++) {
			String n;
			String line = sc.nextLine();
			StringBuilder sb = new StringBuilder();
			StringTokenizer st = new StringTokenizer(line, " ");
			Stack<String> stack = new Stack<String>();;

			n = st.nextToken();
			while (st.hasMoreTokens()) {
				stack.push(st.nextToken());
			}
			sb.append(n.substring(0, 2));

			while (!stack.empty()) {

				sb.append(stack.pop());
				if ( !stack.empty() )
					sb.append("*");
			}
			sb.append(n.substring(2, 4));
			System.out.println(sb.toString());
		}
	}
}