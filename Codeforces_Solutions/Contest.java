//501A Solution

import java.util.*;

public class Contest{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int d = sc.nextInt();
		int resM = Math.max(3*a/10, a -(a/250)*c);
		int resV = Math.max(3*b/10, b -(b/250)*d);
		if(resM == resV)
			System.out.println("Tie");
		else if(resM > resV)
			System.out.println("Misha");
		else
			System.out.println("Vasya");
	}
}