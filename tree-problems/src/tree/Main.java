package tree;

public class Main {
	public static void main(String[] args) {
		BSTree tree = new BSTree();
		tree.add(10);
		tree.add(5);
		tree.add(15);
		tree.add(2);
		tree.add(1);
		
		tree.remove(5);
		tree.inorder(tree.root);
		
		tree.remove(10);
		tree.inorder(tree.root);
		
//		tree.add(6);
//		tree.add(2);
//		tree.add(1);
//		tree.add(90);
//		tree.add(34);
//		tree.add(24);
//		tree.add(114);
		
//		tree.remove(10);
//		System.out.println(tree.find(24));
//		System.out.println(tree.find(94));
//		tree.inorder(tree.root);
//		System.out.println(tree.isBst());
		
//		System.out.println(false ^ false);
//		System.out.println(false ^ true);
//		System.out.println(true ^ false);
//		System.out.println(true ^ true);
	}
}

class Test {
	Test() { // third
		System.out.println("1");
	}
	{ // second
		System.out.println("2");	
	}
	static {  // runs first
		System.out.println("3");
	}
}