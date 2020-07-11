import java.util.Scanner;
class UnionFind {
    int id[];

    UnionFind(int size) {
        id = new int[size];
        for(int i=0; i<size; i++) id[i] = i;
    }

    public void union(int u, int v) {
        u = id[u];
        for(int i=0; i<id.length; i++) {
            if(id[i] == u) id[i] = v;
        }
    }

    public boolean find(int u, int v) {
        if(id[u] == id[v]) return true;
        else return false;
    }
}

class MSTKruskal {
    static int[] visited;
    static int[] edgeVisited;

    public static boolean isConnected() {
        for(int i=0; i<visited.length; i++) if(visited[i] == 0) return false;
        return true;
    }

    public static int findMin(int[][] edges) {
        int min = 999;
        int minIndex = 0;
        for(int i=0; i<edges.length; i++) {
            if(min > edges[i][2] && edgeVisited[i]!=1) {
                
                min = edges[i][2];
                minIndex = i;
            }
        }
        edgeVisited[minIndex] = 1;
        return minIndex;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter nodes and edges:");
        int v = scan.nextInt();
        int e = scan.nextInt();

        visited = new int[v];
        edgeVisited = new int[e];
        UnionFind set = new UnionFind(v);

        
        int edges[][] = new int[e][3];
        System.out.println("Enter the edges:");
        for(int i=0; i<e; i++) {
            edges[i][0] = scan.nextInt(); // src
            edges[i][1] = scan.nextInt(); // dst
            edges[i][2] = scan.nextInt(); // weight
            
        }
        int mst = 0;
        while(!isConnected()) {
            int min = findMin(edges);
            int p = edges[min][0];
            int q = edges[min][1];
            int cost = edges[min][2];
            if(!set.find(p,q)) {
                set.union(p,q);
                mst += cost;
                System.out.println(p +" "+q+" "+cost);
                System.out.println(mst);
            }
            visited[p] = visited[q] = 1;
            
            
        }
        System.out.println(mst);
    }
}