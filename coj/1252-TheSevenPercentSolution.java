class Main {
	
	public static void main(String[] a) {

		java.util.Scanner sc = new java.util.Scanner(System.in);
		String line = sc.nextLine();

		while (!line.equals("#")) {

			for ( int i = 0; i < line.length(); i++) {
				char printed = line.charAt(i);
				if (notEncoded(printed)) {
					System.out.print(printed);
				}

			}
			System.out.print("\n");
			line = sc.nextLine();
		}
	}

	public static boolean notEncoded(char car) {

		if ( car == ' ') {
			System.out.print("%20");
			return false;
		}
		if ( car == '!') {
			System.out.print("%21");
			return false;
		}
		if ( car =='$') {
			System.out.print("%24");
			return false;
		}
		if ( car == '%') {
			System.out.print("%25");
			return false;
		}
		if ( car == '(') {
			System.out.print("%28");
			return false;
		}
		if ( car == ')') {
			System.out.print("%29");
			return false;
		}
		if ( car == '*') {
			System.out.print("%2a");
			return false;
		}
		return true;
	}
}