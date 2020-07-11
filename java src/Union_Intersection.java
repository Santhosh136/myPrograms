package com.sibi.santhosh;

import java.util.Scanner;

public class Union_Intersection {
	
	static boolean contains(int[] a, int key) {
		for(int i: a) if(key == i) return true;
		return false;
	}

	static int[] findUnion(int a[], int b[]) {
		int result [] = new int[a.length + b.length];
		int k = 0;
		for(int i: a) if(!contains(result, i)) result[k++] = i;
		for(int i: b) if(!contains(result, i)) result[k++] = i;
		
		// for(int i: result) if(i != 0) System.out.println(i);

		return result;
	}

	static int[] findInterSection(int[] a, int[] b) {
		int len = (a.length < b.length) ? a.length : b.length;
		int result[] = new int[len];

		int k = 0;
		for(int i: a) {
			if(contains(b, i)) result[k++] = i;
		}
		return result;
	}

	static int[] findExcept(int[] a, int[] b) {
		int len = ((a.length/2)+1) + ((b.length/2)+1);
		int result[] = new int[len];

		int k = 0;
		for(int i: a) {
			if(i%2 !=0 ) result[k++] = i;
		}

		for(int i: b) {
			if(i%2 == 0) result[k++] = i;
		}

		return result;
	}

	static void display(int a[]) {
		for(int i: a) { 
			if(i != 0)
				System.out.print(i+" ");
		}
		System.out.println();
	}

	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter size 1 and size 2:");
		int n1 = scan.nextInt();
		int n2 = scan.nextInt();

		int a[] = new int[n1];
		int b[] = new int[n2];

		System.out.println("Enter array 1:");
		for(int i=0;i<n1;i++) a[i] = scan.nextInt();

		System.out.println("Enter array 2:");
		for(int i=0;i<n2;i++) b[i] = scan.nextInt();

		int union[] = findUnion(a,b);
		int interSection[] = findInterSection(a,b);
		int except[] = findExcept(a,b);

		System.out.print("Union:");display(union);
		System.out.print("Intersection:");display(interSection);
		System.out.print("Except:");display(except);
		
		scan.close();
	}

}
