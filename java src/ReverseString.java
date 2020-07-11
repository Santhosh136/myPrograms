package com.sibi.santhosh;

import java.util.Scanner;

public class ReverseString {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		String name = scan.nextLine();
		
		int index = 0;
		char name1[] = new char[name.length()];
		for(int i=name.length()-1;i>-1;i--) 
			name1[index++] = name.charAt(i);

		System.out.println(name);
		System.out.println(name1);
		scan.close();
	}

}
