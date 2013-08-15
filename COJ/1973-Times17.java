import java.util.Scanner;

class Main {
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String binaryNumber = sc.nextLine();
		Long decimalNumber = Long.parseLong(binaryNumber, 2);
		System.out.println(decimalNumber);		
		decimalNumber = decimalNumber * 17;
	System.out.println(decimalNumber);		
		System.out.println(Long.toBinaryString(decimalNumber));
	}
}