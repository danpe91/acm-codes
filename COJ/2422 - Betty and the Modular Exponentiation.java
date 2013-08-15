import java.math.BigInteger;

class Main {
	
	public static void main(String[] args) {
		
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int t = 0, a = 0, b = 0;
		BigInteger module = new BigInteger("1000000000");
		t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			
			a = sc.nextInt();
			b = sc.nextInt();
			BigInteger bigA = new BigInteger(Integer.toString(a));
			BigInteger bigB = bigA.pow(b);

			System.out.println(bigB.remainder(module));
		}
	}
}
