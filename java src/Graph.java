import java.util.ArrayList;
import java.util.HashMap;
import java.util.Deque;
import java.util.ArrayDeque;
import java.util.Arrays;

class Graph {
	int v;
	int e;
	HashMap<Integer, ArrayList<Integer>> adjList;
	boolean vis[];

	Graph(int v) {
		this.v = v;
		this.adjList = new HashMap<>(v);
		for(int i=0; i<v; i++) {
			adjList.put(i, new ArrayList<>());
		}
		this.vis = new boolean[v];
	}

	void addEdge(int u, int v) {
		adjList.get(u).add(v);
	}

	void displayAdjList() {
		for(int i=0; i<v; i++) {
			System.out.print(i+"->");
			for(int j=0; j<adjList.get(i).size(); j++) {
				System.out.print(adjList.get(i).get(j)+" ");
			}
			System.out.println();
		}
	}

	void dfs(int s) {
		ArrayList<Integer> l = adjList.get(s);

		System.out.println(s);

		for(int i=0; i<l.size(); i++) 
			if(vis[l.get(i)] == false) {
				vis[l.get(i)] = true;
				dfs(l.get(i));
			}
	}

	void bfs(int s) {
		Deque<Integer> queue = new ArrayDeque<Integer>();
		Arrays.fill(vis, false);

		//after adding mark it ad true
		queue.add(s);
		vis[s] = true;

		while(!queue.isEmpty()) {
			int x = queue.poll();
			System.out.println(x);

			for(int i: adjList.get(x)) {
				if(vis[i] == false) {
					//after adding mark it ad true
					vis[i] = true;
					queue.add(i);
				}
			}
		}
	}

	public static void main(String...args) {
		Graph graph = new Graph(5);
		graph.addEdge(0,1);
		graph.addEdge(0,2);
		graph.addEdge(1,2);
		graph.addEdge(1,3);
		graph.addEdge(2,4);
		graph.addEdge(3,4);
		graph.addEdge(4,1);
		graph.displayAdjList();
		System.out.println("DFS");
		graph.dfs(0);
		System.out.println("BFS");
		graph.bfs(0);
	}
}
