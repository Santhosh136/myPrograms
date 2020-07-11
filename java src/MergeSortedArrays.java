package com.sibi.santhosh;

public class MergeSortedArrays {
	public static void main(String args[]) {
		int arr1[] = {1,3,6,14,1001,1005,10001};
		int arr2[] = {2,5,8,10,12,13,78,90,99,11102};
		mergeArrays(arr1, arr2);
	}

	public static void mergeArrays(int[] a1, int[] a2) {


		int result[] = new int[a1.length + a2.length];

		int i=0, j=0, k=0;

		while(i<a1.length || j<a2.length) {
			if(i<a1.length && a1[i] < a2[j]) {
				result[k++] = a1[i++];
			}
			else {
				result[k++] = a2[j++];
			}
		}

		for(int element: result) {
			System.out.print(element+" ");
		}

		System.out.println();
		System.out.println(i);
		System.out.println(j);
		System.out.println(k);

	}

}
