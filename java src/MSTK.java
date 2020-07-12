import java.util.Collections;
import java.util.ArrayList;
import static java.lang.System.out;

class Edge implements Comparable<Edge>{
	int u, v, c;

	Edge(int u, int v, int c) {
		this.u = u;
		this.v = v;
		this.c = c;
	}

	public int compareTo(Edge other) {
		return this.c - other.c;
	}

	public String toString() {
		return this.u+" "+this.v+" cost:"+this.c;
	}
}

class UnionFind {
	int id[];
	UnionFind(int v) {
		this.id = new int[v];
		for(int i=0; i<v; i++) id[i] = i;
	}
	
	public int find(int u) {
		return id[u];
	}
	
	public void union(int u, int v) {
		u = id[u];
		v = id[v];
		for(int i=0; i<id.length; i++) {
			if(id[i] == u) id[i] = v;
		}
	}

	public boolean connected(int u, int v) {
		return find(u) == find(v);
	}

	public String toString() {
		String s = "";
		for(int i: id) s+=String.valueOf(i)+" ";
			return s;
	}
}

class Graph {
	int v, e;
	ArrayList<Edge> edgeList;

	Graph(int v) {
		this.v = v;
		this.edgeList = new ArrayList<>();
	}

	public void addEdge(int u, int v, int cost) {
		this.edgeList.add(new Edge(u,v,cost));
	}

	public void displayEdges() {
		for(Edge e: this.edgeList) out.println(e);
	}

	public int mst() {
		int cost = 0;
		int n = 0;
		UnionFind set = new UnionFind(this.v);
		Collections.sort(edgeList);
		for(Edge e: edgeList) {
			out.println(e);
			int u = e.u;
			int v = e.v;
			int c = e.c;

			if(!set.connected(u,v)) {
				set.union(u,v);
				System.out.println(set);
				cost += c;
				n++;
			}

			if(n == this.v-1) break;
		}

		return cost;
	}
}

class MSTK {
	public static void main(String...args) {
		Graph g = new Graph(5);
		g.addEdge(0,1,3);
		g.addEdge(0,2,5);
		g.addEdge(1,2,1);
		g.addEdge(1,3,6);
		g.addEdge(2,4,4);
		g.addEdge(3,4,10);
		g.addEdge(1,4,1);

		System.out.println("Mst cost:"+g.mst());
	}
}
