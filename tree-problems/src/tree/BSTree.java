package tree;

public class BSTree {
	TNode root;
	
	
	public BSTree() {
		this.root = null;
	}
	
	
	public void add(int key) {
		if(this.root == null) {
			this.root = new TNode(key);
			return;
		}
		
		TNode p = null; // p - parent
		TNode t = this.root; // t - temp root
		
		while(t!=null) {
			p = t;
			if(t.data > key) t = t.left;
			else t = t.right;
		}
		
		if(p.data > key) p.left = new TNode(key);
		else if(p.data < key) p.right = new TNode(key);
	}
	
	
	public boolean remove(int key) {
		TNode t = this.root;
		TNode p = null;
		
		while(t != null) {
			
			if(t.data > key) { p = t; t = t.left; }
			else if(t.data < key) { p = t; t = t.right; }
			else {
				if(t.left == null && t.right == null) {
					if(p.left.data == key) p.left = t = null;
					else if(p.right.data == key) p.right = t = null;
				}
				else if(t.left != null ^ t.right != null) {
					if(t.left != null) {
						t.data = t.left.data;
						t.left = null;
					}
					else if(t.right != null) {
						t.data = t.right.data;
						t.right = null;
					}
				}
				else {
					TNode s = inorderSuccessor(t);
					int val = s.data;
					remove(s.data);
					t.data = val;
				}
				return true;
			}
		}
		return false;
	}
	
	private TNode inorderSuccessor(TNode n) {
		TNode t = n.right;
		while(t.left != null) t = t.left;
		return t;
	}

	public boolean find(int key) {
		TNode t = this.root;
		
		while(t != null) {
			if(t.data == key) return true;
			else if(t.data > key) t = t.left;
			else t = t.right;
		}
		
		return false;
	}
	
	public boolean isBst() {
		return isBstUtil(this.root, Integer.MIN_VALUE, Integer.MAX_VALUE);
	}
	
	private boolean isBstUtil(TNode root, int minValue, int maxValue) {
		if(root == null ) return true;
		if(root.data <= minValue || root.data >= maxValue) return false;
		else return isBstUtil(root.left, minValue, root.data) &&
				isBstUtil(root.right, root.data, maxValue);
	}


	public void inorder(TNode root) {
		if(root == null) return;
		inorder(root.left);
		System.out.println(root.data);
		inorder(root.right);
	}
}
