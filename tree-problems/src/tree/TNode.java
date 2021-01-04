package tree;

// represents a tree node
public class TNode {
	int data;
	TNode left;
	TNode right;
	
	TNode(int data) {
		this.data = data;
		this.left = this.right = null;
	}
}
