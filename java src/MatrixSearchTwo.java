package com.sibi.santhosh;

import java.util.Scanner;
import java.util.Arrays;

public class MatrixSearchTwo {
	static int[] binarySearch(int a[],int key) {
        System.out.println(Arrays.toString(a));
        int low = 0;
        int high = a.length - 1;
        int initMid = ( low + high ) / 2;
        int mid = initMid;
        while( low <= high ) {
            mid = ( low + high ) / 2;
            if( a[mid] == key ) return new int[]{1, mid}; // 1 is for element found
            else if( key < a[mid] ) high = mid - 1;
            else if( key > a[mid] ) low = mid + 1;
        }
        
        if( mid <= initMid && a[mid] > key) return new int[]{0, 1}; //1 in 1st index is for upper matrix
        else return new int[]{0, 2};
    }
        
    static boolean findMid(int a[][], int key) {
        int topRow = 0;
        int btmRow = a.length - 1;
        
        while( topRow <= btmRow ) {
            int midRow = ( topRow + btmRow ) / 2;
            int result[] = binarySearch( a[midRow], key );
            if( result[0] == 1 ) return true;
            else {
                if( result[1] == 1 ) btmRow = midRow - 1;
                else topRow = midRow + 1;
            }
        }
        
        return false;
    }
    
	public static void main (String[] args) {
	    Scanner scan = new Scanner(System.in);
	    int T;
	    
	    T = scan.nextInt();
	    for(int t=0; t<T; t++) {
    	    int n = scan.nextInt();
    	    int m = scan.nextInt();
    	    int a[][] = new int[n][m];
    	    for(int i=0; i<n; i++) 
    	        for(int j=0; j<m ;j++)
    	            a[i][j] = scan.nextInt();
    	    int key = scan.nextInt();
    	    boolean found = findMid(a, key);
    	    if(found) System.out.println(1);
    	    else System.out.println(0);
	    }
	    scan.close();
	}

}
