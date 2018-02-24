//Binary Representation Of A Given Number

import java.util.*;

public class Binary_Number{
	static void bin(int n){
		if(n>1)
			bin(n/2);

		System.out.print(n%2);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number---");
		int n = sc.nextInt();
		System.out.println("Binary Representation---");
		bin(n);
	}
}