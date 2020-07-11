import java.util.Scanner;

class QuickSort {
    static void swap(int a[], int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    static void display(int []a) {
        for(int i: a) System.out.print(i+ " ");
        System.out.println();
    }

    static int partition(int a[], int l, int h) {
        int mid = (l+h)/2;
        swap(a, l, mid);
        
        int pivot = a[l];
        int i = l;
        int j = h+1;
        
            do {
                
                do{i++; } while(a[i] < pivot && i<=h-1); // 1 2 2 -> 2 1 2 
                
                do{j--; } while(a[j] > pivot);
                
                if(i<j) swap(a, i, j);
            }while(i<j);
            
            swap(a, l, j);
        
        return j;
    }

    static void quickSort(int []a, int l, int h) { 
        if(l<h) {
            
                int mid = partition(a, l, h);
                quickSort(a, l, mid-1);
                quickSort(a, mid+1, h);
            
            
        }
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int N1 = scan.nextInt();
        int N2 = scan.nextInt();

        int a[] = new int[N1];
        int b[] = new int[N2];
        for(int i=0; i<N1; i++) a[i] = scan.nextInt();
        for(int i=0; i<N2; i++) b[i] = scan.nextInt();
        int i;
        for(i=a.length - 1; a[i]== 0; i--);
        System.out.println(i);
        int k = 0;
        for(int j=i+1; j<N1; j++) a[j] = b[k++];

        // for(int e: a ) System.out.print(e+" ");
        quickSort(a,0,N1-1);
        display(a);
        // System.out.println(a[(N-1)/2]);

    }
}