import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String phrase = in.nextLine();

		while(phrase.charAt(0) != '*') {
			
			String[] words = phrase.split(" ");

			if (isTautogram(words, words[0].charAt(0)))
				System.out.println("Y");
			else
				System.out.println("N");

			phrase = in.nextLine();
		}
	}

	public static boolean isTautogram(String[] words, char letter) {
    	// 32
		for ( String word : words ) {

			if ( !((word.charAt(0) == letter)
				|| ((int)word.charAt(0) == (int)letter + 32)
				|| ((int)word.charAt(0) == (int)letter - 32))) {

				return false;
			}
		}

		return true;
	}
}
