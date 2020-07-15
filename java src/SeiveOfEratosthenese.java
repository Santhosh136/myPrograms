import java.util.Scanner;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;


class SeiveOfEratosthenese {
	private static List<Integer> generatePrimes(int n) {
		boolean isPrime[] = new boolean[n+1];
		List<Integer> primes = new ArrayList<>();

		Arrays.fill(isPrime, true);
		isPrime[0] = isPrime[1] = false;

		int m = (int )Math.sqrt(n);
		for(int i=2; i<=m; i++) {
			if(isPrime[i]) {
				for(int j=i+i; j<=n; j+=i) {
					isPrime[j] = false;
				}
			}
		}
		
		for(int i=0; i<=n ;i++) {
			if(isPrime[i]) primes.add(i);
		}

		return primes;
	}
	public static void main(String...args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		System.out.println(generatePrimes(n));
	}
}