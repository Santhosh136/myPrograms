class OddEvenList {
    Node head;
    Node last;
    OddEvenList() {
        this.head = null;
        this.last = null;
    }

    private class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    void insert(int data) {
        Node newNode = new Node(data);
        if(this.head == null) {
            this.head = this.last = newNode;
        }else {
            this.last.next = newNode;
            this.last = newNode;
        }
    }

    void display(Node head) {
        
        for(Node temp = head; temp!= null; temp = temp.next) {
            System.out.print(temp.data+" ");
        }
        System.out.println();
    }

    void swap(Node head) {
        int len = 0;
        for(Node temp = head; temp!= null; temp = temp.next) { len++; }
        if(len < 3) {
            return;
        }
        else {
            int n = len / 2;
            
            for(int i=0; i<n; i++) {
                last.next = head.next;
                last = head.next;
                
                head.next = head.next.next;
                head = head.next;
                
                last.next = null;
            }
        }
    }

    public static void main(String args[]) {
        OddEvenList list = new OddEvenList();
        list.insert(10);
        list.insert(20);
        list.insert(30);
        list.insert(40);
        list.insert(50);
        list.insert(60);
        list.insert(70);
        

        list.display(list.head);
        list.swap(list.head);
        list.display(list.head);
    }
}