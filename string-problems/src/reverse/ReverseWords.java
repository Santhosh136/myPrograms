package reverse;

public class ReverseWords {
	public static void main(String[] args) {
		String s = "Java programming is fun";
		System.out.println(reverseWords(s));
	}

	private static String reverseWords(String s) {
		StringBuilder s1 = new StringBuilder();
		StringBuilder s2 = new StringBuilder();
		for(char c: s.toCharArray()) {
			if(c != ' ') s1.append(c);
			else {
				s2.insert(0, s1).insert(0, " ");
				s1.setLength(0);
			}
		}
		s2.insert(0, s1);
		return new String(s2);
	}
}
