class Heap {
    int a[];
    int i = 1;
    Heap(int size) {
        a = new int[size+1];
        a[0] = 100000;
    }

    void insert(int data) {
        a[i] = data;
        int parent = i, temp;
        int child = i;
        do {
            parent = parent/2; // 3 1 2 4 6 7
            if( a[parent] < a[child]) {
                temp = a[child];
                a[child] = a[parent];
                a[parent] = temp;
                child /= 2;
            }
        } while(parent>1);

        i++;
    }

    void display() {
        for(int i=1; i<a.length; i++) System.out.println(a[i]);
    }

    public static void main(String args[]) {
        Heap h = new Heap(10);
        h.insert(1);
        h.insert(2);
        h.insert(3);
        h.insert(4);
        h.insert(5);

        h.insert(6);
        h.insert(7);
        h.insert(8);
        h.insert(9);
        h.insert(10);

        h.display();
    }
}