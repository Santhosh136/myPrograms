class QuickFind {

	int id[];
	// constructor 
	QuickFind(int size) {
		this.id = new int[size];
		for(int i=0; i<size; i++) id[i] = i;
	}

	void union(int a, int b) {
		for(int i=0; i<id.length; i++) 
			if(id[i] == a) id[i] = b;
	}

	boolean find(int a, int b) {
		return id[a] == id[b];
	}

	void display() {
		for(int i: id) {
			System.out.print(i+" ");
		}
		System.out.println();
	}

	public static void main(String args[]) {
		QuickFind test = new QuickFind(10);

		test.union(0,1);
		test.display();

		test.union(2,1);
		test.display();

		test.union(9,1);
		test.display();

		System.out.println(test.find(0,9));
		test.display();

		test.union(1,5);
		test.display();
		
		System.out.println(test.find(0,5));
		System.out.println(test.find(6,9));
		System.out.println(test.find(3,4));
	}
}
