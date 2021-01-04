package simple;

public class IpToInteger {
	public static void main(String[] args) {
		String ip = "255.0.0.255";
		long number = 0;
		for(char c: ip.toCharArray()) {
			if(c != '.') number = number*10 + c-48;
		}
		System.out.println(number);
	}
}
