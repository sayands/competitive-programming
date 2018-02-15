//479A solution

import java.util.*;

public class Expression{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int res = Math.max(a+b+c, Math.max(a*b*c,Math.max(a*(b+c),(a+b)*c)));
		System.out.println(res);
		sc.close();
	}
}