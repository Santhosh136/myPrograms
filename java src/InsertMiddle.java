class InsertMiddle {
    public static void main(String args[]) {
        int a[] = new int[10];
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;

        int lastIndex = -1;
        for(int i: a) { if(i!=0) lastIndex++; System.out.print(i+" ");}

        for(int i=lastIndex; i>=1; i--) {
            a[i+1] = a[i];
        }
        a[1] = 23;
        System.out.println();
        for(int i: a) System.out.print(i+" ");
    }
}