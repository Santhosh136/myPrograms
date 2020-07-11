package com.sibi.santhosh;

import java.util.Scanner;

public class RotateMatrix {

	static void display(int[][] a) {
		for(int i=0;i<a.length;i++) {
			for(int j=0;j<a.length;j++) {
				System.out.print(a[i][j]+" ");
			}
			System.out.println();
		}
	}

	static int[][] rotateMatrix(int[][] a) {

		int res[][] = new int[a.length][a.length];

		int t = 0, l = 0, b = a.length-1, r = a.length -1;
		int dir = 0;
		int prev = 0;
		int temp = 0;

		while(t<=b+1 && l<=r) {
			System.out.println("t="+t+" b="+b+" l="+l+" r="+r);
			if(dir == 0) {
				System.out.println("dir 0");
				prev = a[t][l];
				for(int i=l+1; i<=r; i++) {
					temp = a[t][i];
					a[t][i] = prev;
					prev = temp;
					// System.out.println("prev"+prev);
					// System.out.println("->"+a[t][i]);
				}
				t++;

			}
			if(dir == 1) {
				System.out.println("dir 1");
				for(int i=t; i<= b; i++) {
					temp = a[i][r];
					a[i][r] = prev;
					prev = temp;
					// System.out.println("p"+prev);
					// System.out.println(">>"+a[i][r]);
				}
				r--;
			}
			if(dir == 2) {
				System.out.println("dir 2");
				for(int i=r; i>=l; i--) {
					temp = a[b][i];
					a[b][i] = prev;
					prev = temp;
					// System.out.println(prev);
					// System.out.println(res[b][i]);	
				}
				b--;
			}
			if(dir == 3) {
				System.out.println("dir 3");
				for(int i=b; i>=t; i--) {
					temp = a[i][l];
					a[i][l] = prev;
					prev = temp;
					System.out.println(prev);
					// System.out.println("--"+res[i][l]);
				}
				l++;
				a[t-1][l-1] = prev;
			}
			
			dir = (dir + 1) % 4;
		}
		return res;
	}

	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter n:");
		int n = scan.nextInt();

		int a[][] = new int[n][n];
		for(int i=0;i<n;i++) 
			for(int j=0;j<n;j++) 
				a[i][j] = scan.nextInt();

		@SuppressWarnings("unused")
		int [][] res = rotateMatrix(a);
		display(a);
		scan.close();
	}
}
