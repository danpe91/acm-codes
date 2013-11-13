import java.math.BigInteger;

class Main {

	public static void main(String[] aa) {

		java.util.Scanner sc = new java.util.Scanner(System.in);
		int t = sc.nextInt();
		int n, m;
		for ( int k = 1; k <= t; k++) {
			n = sc.nextInt();
			m = sc.nextInt();
			String nextN;
			BigInteger multipliedN = BigInteger.ONE, multipliedM = BigInteger.ONE;
			for ( int i = 0; i < n; i++) {
				nextN = sc.next();
				multipliedN = multipliedN.multiply(new BigInteger(nextN));
			}
			for ( int i = 0; i < m; i++) {
				nextN = sc.next();
				multipliedM = multipliedM.multiply(new BigInteger(nextN));;
			}
			BigInteger common = multipliedN.gcd(multipliedM);
			multipliedN =  multipliedN.divide(common);
			multipliedM =  multipliedM.divide(common);
			
			System.out.println("Case #" + k + ": " + multipliedN + " / " + multipliedM);

		}

	}
}
