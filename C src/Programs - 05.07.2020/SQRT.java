
class SQRT {
	public static void main(String[] args) {
		
		int n =	sqrt(10000);
		System.out.println(n);
	}
	
	public static int sqrt(int n) {
		return find_sqrt(n, 0, n);
	}
	
	public static int find_sqrt(int n,int min,int max) {
		if(min > max) return -1;
	
		int guess = (min+max)/2;
		int res = 0;
		if(guess * guess == n) {
			res = guess;
		}
		else if(guess * guess < n) {
			res = find_sqrt(n, guess+1, max);
		}
		else if(guess * guess > n) {
			res = find_sqrt(n, min, guess-1);
		}
		return res;
	}
}
