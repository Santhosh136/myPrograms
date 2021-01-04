package reverse;

public class ReverseLetters {
	public static void main(String[] args) {
		String s = "java   is    marvelous";
//		System.out.println(reverse(s));
		System.out.println(reverseUsingArray(s));
	}

	private static String reverseUsingArray(String s) {
		char []c = s.toCharArray();
		int st = 0, e = c.length-1;
		while(st<e) {
			if(c[st] == ' ') {
				st++;
				continue;
			}
			if(c[e] == ' ') {
				e--;
				continue;
			}
			char t = c[st];
			c[st] = c[e];
			c[e] = t;
			
			st++;
			e--;
		}
		return new String(c);
	}

	@SuppressWarnings("unused")
	private static String reverse(String s) {
		StringBuilder sb = new StringBuilder();
		for(int i=s.length()-1 ; i>=0; i--) sb.append(s.charAt(i));
		return new String(sb);
	}
	
	
}
