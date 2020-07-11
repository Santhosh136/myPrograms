import java.util.Scanner;
class TrieNode {
	String word;
	boolean end;
	TrieNode[] children;

	TrieNode() {
		word = null;
		end = false;
		children = new TrieNode[27];
	}
}

class Trie {
	TrieNode root;

	Trie() {
		this.root = new TrieNode();
	}

	void insert(String word) {
		TrieNode node = root;
		for(char c: word.toCharArray()) {
			if(node.children[c - 'a'] == null) node.children[c-'a'] = new TrieNode();
			node = node.children[c - 'a'];
		}
		node.end = true;
		node.word = word;
	}

	boolean contains(String word) {
		TrieNode node = root;
		for(char c: word.toCharArray()) {
			if(node.children[c-'a'] == null) return false;
			node = node.children[c-'a'];
		}
		return node.end;
	}

	private void display(TrieNode root) {
		if(root.end) System.out.println(root.word);
		for(int i=0; i<root.children.length; i++) {
			if(root.children[i] != null) display(root.children[i]);
		}
	}

	public void displayContent() {
		display(root);
	}

	public void autoComplete(String word) {
		TrieNode node = root;
		for(char c: word.toCharArray()) {
			if(node.children[c-'a'] != null) node = node.children[c-'a'];
		}
		if(node != root) display(node);
		else System.out.println("No such word");
	}
}

class TrieJava {
	public static void main(String...arfs) {
		Trie t = new Trie();
		t.insert("apple");
		t.insert("applet");
		t.insert("app");
		t.insert("alagan");
		t.insert("batt");
		t.insert("ball");

		System.out.println("Words are:");
		t.displayContent();

		System.out.println("Words starts with 'ba'");
		t.autoComplete("ba");

		System.out.println("Words starts with 'er'");
		t.autoComplete("er");
	}
}
