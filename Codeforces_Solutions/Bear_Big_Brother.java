//791A Solution

import java.util.*;

public class Bear_Big_Brother{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long a = sc.nextLong();
		long b = sc.nextLong();
		int count = 0;
		while(a<=b){
			a = 3*a;
			b = 2*b;
			count++;
		}
		System.out.println(count);
		sc.close();
	}
}