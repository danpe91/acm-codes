class Main {

	static final String _class = "class";

	public static void main(String[] a) {

		java.util.Scanner in = new java.util.Scanner(System.in);
		String line;
		String subsequence;
		String identifier_class = "";
		int index, classCounter = 0;
		boolean isClass;

		try {

			while(true) {


				line = in.nextLine();
				line.trim();

				isClass = line.contains(_class);

				index = line.indexOf('{');
				if (index != -1) {
					
					subsequence = line.subSequence(0,index).toString().trim();

					if (isClass) {
						classCounter++;
						index = subsequence.lastIndexOf(' ');
						identifier_class = subsequence.subSequence(index + 1, subsequence.length()).toString();
					} else {

						if (subsequence.contains("main")) {
							System.out.println(identifier_class);
							break;
						}
					}
					
				} else if (line.contains("}")) {
					classCounter--;
				}
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
