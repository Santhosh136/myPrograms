package reverse;

public class ReverseWords {
	
	public static void main(String[] args) {
		String s = "Java programming is fun";
		System.out.println(reverseWords(s));
	}

	private static String reverseWords(String s) {
		char c[] = s.toCharArray();
		int start = 0; // to store the starting position
		reverse(c, 0, c.length-1); // first reverse the entire string
		for(int i=0; i<c.length; i++) 
			if(c[i] == ' ') {
				reverse(c, start, i-1); // again reverse the sub string before space
				start = i+1; // updating the start position
			}
		
		reverse(c, start, c.length-1); // reversing the last word
		return new String(c);
	}

//	to reverse the array in place
	private static void reverse(char[] c, int i, int j) {
		while(i < j) {
			char temp = c[i];
			c[i] = c[j];
			c[j] = temp;
			i++; j--;
		}
		
	}

//	Using StringBuilder  
//	private static String reverseWords(String s) {
//		StringBuilder s1 = new StringBuilder();
//		StringBuilder s2 = new StringBuilder();
//		for(char c: s.toCharArray()) {
//			if(c != ' ') s1.append(c);
//			else {
//				s2.insert(0, s1).insert(0, " ");
//				s1.setLength(0);
//			}
//		}
//		s2.insert(0, s1);
//		return new String(s2);
//	}
}
