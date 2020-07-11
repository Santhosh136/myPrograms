package com.sibi.santhosh;

import java.util.Scanner;

public class MatrixSearchOne {
	static int count = 0;
	public static int[] find(int a[], int key) {
		int low = 0;
		int high = a.length - 1;
		int half = (low + high) /2 ;
		int mid = half;
		while(low <= high) {
			count++;
			mid = ( low + high ) / 2;
			if( a[mid] == key ) return new int[]{mid ,1};
			if(key > a[mid]) low = mid + 1;
			else if(key < a[mid]) high = mid - 1;
		}
		if( mid < half )
			return new int[]{1, -1};
		else 
			return new int[]{2, -1};
	}

	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter n:");

		int n = scan.nextInt();
		int a[][] = new int[n][n];

		for(int i=0;i<n;i++) for(int j=0; j<n; j++) a[i][j] = scan.nextInt();

		System.out.println("Enter key:");
		int key = scan.nextInt();

		boolean flag = true;
		int t = 0;
		int b = n-1;
		while( t <= b) {
			count++;
			int midRow = ( t + b ) / 2;
			int arr[] = find(a[midRow], key);
			if(arr[1] == -1) {
				if(arr[0] == 1) b = midRow-1;
				else if(arr[0] == 2) t = midRow + 1;
			} 
			else {
				System.out.println("Position:"+ midRow +" "+arr[0]);
				flag = false;
				break;
			}
		}
		if(flag) System.out.println("No key");
		System.out.println("Count is:"+ count);
		
		scan.close();
	}
}
