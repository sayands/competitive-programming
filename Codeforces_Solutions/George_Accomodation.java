//467A Solution

import java.util.*;

public class George_Accomodation{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int p[] = new int[n];
		int q[] = new int[n];
		for(int i=0;i<n;i++){
			p[i] = sc.nextInt();
			q[i] = sc.nextInt();
		}
		int count=0;
		for(int i=0;i<n;i++){
			if(p[i]<=q[i]-2)
				count++;
		}
		System.out.println(count);
		sc.close();
	}
}