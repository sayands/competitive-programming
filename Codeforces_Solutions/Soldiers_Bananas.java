//546A Solution

import java.util.*;

public class Soldiers_Bananas{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k = sc.nextInt();
		long n = sc.nextLong();
		int w = sc.nextInt();
		long cost = 0L;
		for(int i=1;i<=w;i++)
			cost  = (long)(cost + i*k);
		long res = (long)(cost -n);
		System.out.println(res>0?res:0);
		sc.close();
	}
}