package simple;

public class TrimTheString {
	public static void main(String[] args) {
		String s = "     Hello    World         ";
		String s1 = trim(s);
		System.out.println(s1);
	}

	private static String trim(String s) {
		int start = 0;
		int end = 0;
		for(int i=0; ; i++) {
			if(s.charAt(i) != ' ') {
				start = i;
				break;
			}
		}
		
		for(int i=s.length()-1; ; i--) {
			if(s.charAt(i) != ' ') {
				end = i;
				break;
			}
		}
		
		return s.substring(start, end+1);
	}
}
