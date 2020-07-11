import java.util.Deque; // used for queues and stacks
import java.util.ArrayDeque; 
import java.util.List;
import java.util.ArrayList; 
import java.util.TreeMap;


class TreeMethods {

	// tree node
    static private class Node {
        int data;
        Node left, right;


        Node(int data) {
            this.data = data;
            this.left = this.right = null;
        }
    }

    // tree class
    static private class Tree {
        Node root;

        Tree() {
            this.root = null;
        }

        void postorder(Node root) {
            if(root != null) {
                postorder(root.left);
                postorder(root.right);
                System.out.print(root.data+" ");
            }
        }

        int height(Node root) {
            int x, y;
            if(root != null) {
                x = height(root.left);
                y = height(root.right);
                if( x > y )  return x+1 ;
                else return y+1 ;
            }
            return 0;
        }

        int count(Node root) {
            int x, y;
            if(root != null) {
                x = count(root.left);
                y = count(root.right);
                return x + y + 1;
            }
            return 0;
        }

        int countLeaf(Node root) {
            int x, y;
            if(root != null) {
                x = countLeaf(root.left);
                y = countLeaf(root.right);
                if(root.left == null && root.right == null) {
                    return x + y + 1;
                }
                else {
                    return x+y;
                } 
            }
            return 0;
        }

        int singleLeafCount(Node root) {
            int x,y;
            if(root != null) {
                x = singleLeafCount(root.left);
                y = singleLeafCount(root.right);
                if((root.left == null && root.right != null) || (root.left != null && root.right == null))
                    return x + y + 1;
                else return x + y;
            }
            return 0;
        }

        List<List<Integer>> bfs(Node root) {
        	if(root == null) return null;
        	Deque<Node> q = new ArrayDeque<>();
        	List<List<Integer>> l = new ArrayList<List<Integer>>();
        	q.add(root);

        	while(!q.isEmpty()) {
        		List<Node> ln = new ArrayList<>();
        		List<Integer> li = new ArrayList<>();
        		while(!q.isEmpty()) {
        			Node n = q.remove();
        			li.add(n.data);
        			ln.add(n);
        		}
        		l.add(0,li);
        		for(Node n: ln) {
        			if(n.left != null) q.add(n.left);
        			if(n.right != null) q.add(n.right);
        		}
        	}

        	return l;
        }

        List<Integer> leftView(Node root) {
        	Deque<Node> q = new ArrayDeque<>();
        	List<Integer> lv = new ArrayList<>();
        	q.add(root);

        	while(!q.isEmpty()) {
        		int l = q.size();
        		for(int i=0; i<l; i++) {
        			Node x = q.poll();
        			if(i==0) lv.add(x.data);
        			if(x.left!= null) q.add(x.left);
        			if(x.right!= null) q.add(x.right);
        		}
        	}
        	return lv;
        }

        List<Integer> rightView(Node root) {
        	Deque<Node> q = new ArrayDeque<>();
        	List<Integer> rv = new ArrayList<>();
        	q.add(root);

        	while(!q.isEmpty()) {
        		int l = q.size();
        		for(int i=0; i<l; i++) {
        			Node x = q.poll();
        			if(i==0) rv.add(x.data);
        			if(x.right!= null) q.add(x.right);
        			if(x.left!= null) q.add(x.left);
        		}
        	}
        	return rv;
        }

        List<Integer> topView(Node root) {
        	class NewNode {
  				int hd;
  				Node node;

  				NewNode(Node node, int hd) {
  					this.node = node;
  					this.hd = hd;
  				}
        	}

        	TreeMap<Integer, Node> ht = new TreeMap<>();
        	Deque<NewNode> q = new ArrayDeque<>();
        	List<Integer> l = new ArrayList<>();

        	NewNode r = new NewNode(root, 0);
        	q.add(r);

        	while(!q.isEmpty()) {
        		NewNode x = q.poll();
        		if(!ht.containsKey(x.hd)) ht.put(x.hd, x.node);
        		if(x.node.left != null) q.add(new NewNode(x.node.left, x.hd-1));
        		if(x.node.right != null) q.add(new NewNode(x.node.right, x.hd+1));
        	}

        	for(Node n: ht.values()) {
        		l.add(n.data);
        	}

        	return l;
        }

    }

    public static void main(String args[]) {
        
        Tree tree = new Tree();
        tree.root = new Node(10);
        tree.root.left = new Node(20);
        tree.root.right = new Node(30);
        tree.root.left.right = new Node(33);
        tree.root.right.left = new Node(40);
        tree.root.right.right = new Node(50);
        tree.root.left.right.left = new Node(60);
        tree.root.right.left.left = new Node(67);

        tree.postorder(tree.root);

        System.out.println();
        System.out.println("Height is "+tree.height(tree.root));
        System.out.println("Count is "+tree.count(tree.root));
        System.out.println("Leaf Count is "+tree.countLeaf(tree.root));
        System.out.println("Single Leaf Count is "+tree.singleLeafCount(tree.root));
        System.out.println("BFS:");
        List<List<Integer>> list = tree.bfs(tree.root);
        System.out.println(list);
        System.out.println("Left view:"+tree.leftView(tree.root));
        System.out.println("Right view:"+tree.rightView(tree.root));
        System.out.println("Top view:"+tree.topView(tree.root));

    }
}

/*
              10
        20         30
          33      40  50
        60      67
*/