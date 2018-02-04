//688B solution

import java.util.*;

public class Lovely_Palindrome{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n = sc.next();
		System.out.print(n);
		for(int i=n.length()-1;i>=0;i--)
			System.out.print(n.charAt(i));
		sc.close();
	}
}