import java.util.Deque;
import java.util.ArrayDeque;

class ReverseLL {
	private class Node{
		int val;
		Node next;

		Node(int val) {
			this.val = val;
			this.next = null;
		}

		public String toString() {
			return String.valueOf(this.val);
		}
	}

	Node head;
	int size;

	ReverseLL() {
		this.head = null;
		this.size = 0;
	}

	void insert(int val) {
		if(head == null) {
			head = new Node(val);
			return ;
		}
		Node node = head;
		while(node.next != null) {
			node = node.next;
		}
		node.next = new Node(val);
		size++;
	}

	void display() {
		Node node = head;
		while(node != null) {
			System.out.print(node.val+" ");
			node = node.next;
		}
		System.out.println();
	}

	// store node reference to stack O(n) space and time complexity
	void reverseStack() {
		Deque<Node> stack = new ArrayDeque<>();
		Node node = head;
		while(node != null) {
			stack.push(node);
			node = node.next;
		}

		this.head = stack.pop();
		node = this.head;
		while(!stack.isEmpty()) {
			node.next = stack.pop();
			node = node.next;
		}
		node.next = null;
	}

	// changing pointers , O(n) time and O(1) space complexity
	void reverse() {
		Node cur = this.head;
		Node next = this.head;
		Node prev = null;

		while(cur != null) { // 10-20-30-40-50
			next = cur.next;
			cur.next = prev;
			prev = cur;
			cur = next;
		}

		this.head = prev;
	}

	public static void main(String...args) {
		ReverseLL list = new ReverseLL();
		list.insert(10);
		list.insert(20);
		list.insert(30);
		list.insert(40);
		list.insert(50);

		list.display();
		list.reverseStack();
		list.display();
		list.reverse();
		list.display();
	}

}
