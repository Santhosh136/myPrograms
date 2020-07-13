class Permutation {

	static void swap(char[] c, int i, int j) {
		char t = c[i];
		c[i]= c[j];
		c[j] = t;
	}

	static void permute(char[] c , int l, int r) {
		for(int i=l; i<=r; i++) {
			if(l == r) System.out.println(c);
			swap(c, l, i);
			permute(c, l+1, r);
			swap(c, l, i);
		}
	}
	
	public static void main(String...args) {
		String s = "abc";

		char[] c = s.toCharArray();
		permute(c, 0, c.length-1);
	}

}
