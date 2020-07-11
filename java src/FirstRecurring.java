package com.sibi.santhosh;

import java.util.Scanner;
import java.util.HashSet;

public class FirstRecurring {
	
	static int findFirstRecurring(int[] a) {
		HashSet<Integer> set = new HashSet<Integer>();
		for(int i: a) {
			if(set.contains(i)) return i;
			else set.add(i);
		}
		return  -1;
	}

	@SuppressWarnings("resource")
	public static void main(String args[]) {
		System.out.println("Enter no of array elements:");
		int n = new Scanner(System.in).nextInt();
		int a[] = new int[n];
		System.out.println("Enter array elements:");
		for(int i=0;i<n;i++) {
			a[i] = new Scanner(System.in).nextInt();
		}

		int answer = findFirstRecurring(a);
		if(answer == -1) System.out.println("No recurring..");
		else { System.out.println("Answer is "+answer);

		}
		
	}

}
