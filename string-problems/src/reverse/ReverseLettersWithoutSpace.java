package reverse;

public class ReverseLettersWithoutSpace {
	public static void main(String[] args) {
		String s = "java   is    marvelous";

		System.out.println(reverseUsingArray(s));
	}

	private static String reverseUsingArray(String s) {
		char []c = s.toCharArray();
		int st = 0, e = c.length-1; // st -> start , e -> end
		while(st < e) {
			if(c[st] == ' ') { // if it is a space just skip
				st++;
				continue;
			}
			if(c[e] == ' ') {  // if it is a space just skip
				e--;
				continue;
			}
			char t = c[st]; // otherwise swap the characters
			c[st] = c[e];
			c[e] = t;
			
			st++;
			e--;
		}
		return new String(c);
	}
}
