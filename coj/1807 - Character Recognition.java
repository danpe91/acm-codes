class Main {

	public static void main(String[] args) {

		final String END_OF_TEXT = "%.";
		int n = 0, r = 0, a = 0, size = 0; boolean fractional = false;
		double ratio = 0.0;
		String line, formatted;
		java.util.Scanner sc = new java.util.Scanner(System.in);

		n = sc.nextInt();
		line = sc.nextLine();
		try{

			while (n > 0) {

				n--;
				r = 0; a = 0;

				line = sc.nextLine();

				while(!line.trim().isEmpty()) {

					size = line.length();
					a += size;
					for (int i = 0; i < size; ++i) {

						if(line.charAt(i) != '#') {
							r++;
						}
					}

					if(sc.hasNextLine()) {
						line = sc.nextLine();
					} else {
						line = "";
					}
				}

				ratio = (double)r / (double)a;
				ratio *= 100;
				fractional = (ratio == ((int)ratio));
				ratio += 0.01;
				if (fractional) {
					formatted = String.format("Efficiency ratio is %.0f", ratio);
				} else {
					formatted = String.format("Efficiency ratio is %.1f", ratio);
				}
				System.out.println(formatted + END_OF_TEXT);
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
