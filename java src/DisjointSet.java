class DSet {
	int[] id ;
	DSet(int v) {
		this.id = new int[v];
		for(int i=0; i<v; i++) id[i] = i;
	}
	
	public void union(int u, int v) {
		u = id[u];
		v = id[v];
		for(int i=0; i<id.length; i++) if(id[i] == u) id[i] = v;
	}

	public int find(int u) {
		return id[u];
	}

	public boolean connected(int u, int v) {
		return this.find(u) == this.find(v);
	}

	public String toString() {
		String s = "";
		for(int i: id) s+=String.valueOf(i)+" ";
			return s;
	}
}

class DisjointSet {
	public static void main(String...args) {
		DSet set = new DSet(5);
		System.out.println(set.connected(0,1));
		set.union(0,2);
		System.out.println(set);
		set.union(2,1);
		System.out.println(set);
		System.out.println(set.connected(2,1));
		set.union(2,4);
		System.out.println(set);		
		System.out.println(set.connected(4,0));
		set.union(4,3);
		System.out.println(set);
	}
	
}
