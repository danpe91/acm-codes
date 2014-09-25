import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;
class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		String line = "";
		String pattern = "da+dd?(i|y)";

		Pattern p = Pattern.compile(pattern);

		try {
			while (true) {
				line = sc.next();
				Matcher m = p.matcher(line);

				if(m.find() && !m.find(1)) {
					System.out.println("She called me!!!");
				} else {
					System.out.println("Cooing");
				}
			}
		} catch (Exception e){}
	}
}
