import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int number = sc.nextInt();
		while ( number != 0) {

			System.out.println("The parity of " + Integer.toBinaryString(number) + " is " 
						+ getParity(Integer.toBinaryString(number)) + " (mod 2).");
			number = sc.nextInt();
		}
	}

	public static int getParity(String binaryString) {

		int sum = 0;

		for ( int i = 0; i < binaryString.length(); i++) {
			if ( binaryString.charAt(i) == '1')
				sum++;
		}

		return sum;
	}

}