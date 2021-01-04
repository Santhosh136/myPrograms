package simple;

// print the first letters of the every word in a string
public class FirstLetterOfWords {
	public static void main(String[] args) {
		String s = "Hi I am santhosh from coimbatore";
		System.out.print(s.charAt(0));
		for(int i=0; i<s.length(); i++) {
			if(s.charAt(i) == ' ') System.out.print(s.charAt(i+1));
		}
	}
}
