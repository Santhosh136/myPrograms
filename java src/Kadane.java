class Kadane {
	private static int maxSumSubArray(int[] a) {
		int sum = 0;
		int max = Integer.MIN_VALUE;
		int x = 0, y = 0, s=0;
		for(int i=0; i<a.length; i++) {
			sum = sum + a[i];
			if(max < sum) {
				max = sum;
				x = s;
				y = i;
			}
			if(sum < a[i]){ 
				sum = a[i];
				s = i;
			}
			
		}
		System.out.println("x:"+x+"y:"+y);
		return max;
	}
	public static void main(String...args) {
		int a[] = {-1,3,3,-3,-4,1,2,3};
		int max = maxSumSubArray(a);
		System.out.println(max);
	}
}