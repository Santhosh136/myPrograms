import java.util.Map;
import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;
import java.util.Deque;
import java.util.ArrayDeque;
import java.util.Scanner;

class GraphP {
	// no of vertices and edges
	int v;
	int e;

	// representation of graph
	Map<Integer, List<Integer>> adjList;

	// constructor
	GraphP(int v) {
		this.v = v;
		this.adjList = new HashMap<>();
		for(int i=0; i<v; i++) adjList.put(i, new ArrayList<Integer>());
	}

	// adding edge 
	void addEdge(int u, int v) {
		adjList.get(u).add(v);
		this.e += 1;
	}

	void displayAdjList() {
		for(int i=0; i<v; i++) {
			System.out.println(i+"->"+adjList.get(i));
		}
	}

	List<List<Integer>> bfs(int s) {
		boolean[] visited = new boolean[this.v];
		Deque<Integer> queue = new ArrayDeque<>();
		List<List<Integer>> list = new ArrayList<>();

		queue.add(s);
		visited[s] = true;
		while(!queue.isEmpty()) {
			
			int n = queue.poll();
			List<Integer> l = new ArrayList<>();
			for(int neighbour: adjList.get(n)) {
				if(!visited[neighbour]) {
					queue.add(neighbour);
					visited[neighbour] = true;
					l.add(neighbour);
				}
			}
			list.add(l);
		}

		return list;
	}

	public static void main(String...args) {
		Scanner scan = new Scanner(System.in);

		int v,e;
		System.out.println("Enter the no of nodes and no of edges:");
		v = scan.nextInt();
		e = scan.nextInt();

		GraphP graph = new GraphP(v);
		for(int i=0; i<e; i++) {
			System.out.println("Enter the u and v:");
			String[] uv = scan.next().split(",");
			graph.addEdge(Integer.parseInt(uv[0]), Integer.parseInt(uv[1]));
		}

		graph.displayAdjList();
		System.out.println(graph.bfs(0));
	}
}
