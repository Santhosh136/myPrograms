import java.util.Scanner;

class MergeSort {
    public static void display(int[] a) {
        for(int i: a) System.out.print(i+" ");
        System.out.println();
    }                                                          // l       m       h
    public static void merge(int[] a, int l, int mid, int h) { // 1 3 4 7 9 2 5 6 8
        int temp[] = new int[a.length];
        int i = l, j = mid + 1;
        int k = 0;
        while( i <= mid && j <= h) {
            if( a[i] < a[j] ) temp[k++] = a[i++];
            else temp[k++] = a[j++];
        }
        
        while( i <= mid) temp[k++] = a[i++];
        while( j <= h ) temp[k++] = a[j++];

        i = 0;
        while(i<k) {a[l+i] = temp[i]; i++;}
        
    }
    public static void mergeSort(int a[], int l, int h) {
        if(l<h) {

            int mid = ( l + h ) / 2;
            mergeSort(a, l, mid);
            mergeSort(a, mid+1, h);
            merge(a, l, mid, h);
        }
    }
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int N;
        N = scan.nextInt();
        int a[] = new int[N];
        for(int i=0; i<N; i++) a[i] = scan.nextInt();
        mergeSort(a, 0, N-1);
        display(a);
    }
}