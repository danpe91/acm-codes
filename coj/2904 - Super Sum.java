import java.math.BigInteger;
class Main {

	public static void main(String[] args) {
		
		java.util.Scanner sc = new java.util.Scanner(System.in);
		BigInteger integer;
		BigInteger sum = BigInteger.ZERO;
		int t = 0;
		String number;
		t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			number = sc.next();
			integer = new BigInteger(number);
			sum = sum.add(integer);
		}
		System.out.println(sum);
	}
}
