package tree;

public class BSTree {
	TNode root;
	
//	constructor for bst
	public BSTree() {
		this.root = null;
	}
	
//	adds a new node to bst
	public void add(int key) {
//		if the root is null then create a node and assign it to root
		if(this.root == null) {
			this.root = new TNode(key);
			return;
		}
		
//		take the reference of parent node to add the node
		TNode p = null; // p - parent
		TNode t = this.root; // t - temp root
		
//		go to the node's position using while loop
		while(t!=null) {
			p = t;
			if(t.data > key) t = t.left;
			else t = t.right;
		}
		
//		then add the node 
		if(p.data > key) p.left = new TNode(key);
		else if(p.data < key) p.right = new TNode(key);
	}
	
//	removes the node from bst
	public boolean remove(int key) {
		TNode t = this.root;
		TNode p = null;
		
//		find the node's position using while loop
		while(t != null) {
			
			if(t.data > key) {p = t;  t = t.left; } // go left 
			else if(t.data < key) {p = t; t = t.right; } // go right
			else { // found the node
				if(t.left == null && t.right == null) { // if it is a leave node
					if(p.left.data == key) p.left = t = null;
					else if(p.right.data == key) p.right = t = null;
				}
				else if(t.left != null ^ t.right != null) { // if it has a single child
					if(t.left != null) { // if it has a left sub tree
						p.left = t.left; // change parent's left to current node's left
						t = null;
					}
					else if(t.right != null) { // if it has right sub tree
						p.right = t.right; // change parent's right to current node's right
						t = null; 
					}
				}
				else { // if it is has both the children
					TNode s = inorderSuccessor(t); 
					int val = s.data; // copy its value
					remove(s.data); // remove it from bst
					t.data = val; // update current node's value
				}
//				the node was deleted successfully
				return true;
			}
		}
		return false;
	}
	
//	returns inorder successor of a given node
	private TNode inorderSuccessor(TNode n) {
		TNode t = n.right; // take the reference of the right sub tree
	
		while(t.left != null) t = t.left; // find the left most node
		return t;
	}

//	checks if a node is present or not
	public boolean find(int key) {
		TNode t = this.root;
		
		while(t != null) {
			if(t.data == key) return true;
			else if(t.data > key) t = t.left;
			else t = t.right;
		}
		return false;
	}
	
//	checks whether it the binary tree is bst or not
	public boolean isBst() { 
		return isBstUtil(this.root, Integer.MIN_VALUE, Integer.MAX_VALUE);
	}
	
//	utility method for isBst
	private boolean isBstUtil(TNode root, int minValue, int maxValue) {
		if(root == null ) return true; // return true if it is empty tree
		if(root.data <= minValue || root.data >= maxValue) return false; // return false if the value is not in the range
		else return isBstUtil(root.left, minValue, root.data) && // recursively call for left and right sub trees
				isBstUtil(root.right, root.data, maxValue);
	}

	public void inorder(TNode root) {
		if(root == null) return;
		inorder(root.left);
		System.out.println(root.data);
		inorder(root.right);
	}
}
