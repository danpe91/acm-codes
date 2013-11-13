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
			Queue<String> queue = new java.util.concurrent.ConcurrentLinkedQueue<String>();

			n = st.nextToken();
			while (st.hasMoreTokens()) {
				queue.add(st.nextToken());
			}
			sb.append(n.substring(0, 3));
			String element = queue.poll();
			while ( element != null ) {

				sb.append(element);
				element = queue.poll();
				if ( element != null )
					sb.append("*");
			}
			sb.append(n.substring(3, 6));
			System.out.println(sb.toString());
		}
	}	
}
