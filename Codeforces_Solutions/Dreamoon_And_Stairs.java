//476A Solution

import java.util.*;

public class Dreamoon_And_Stairs{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n,m;
		n = sc.nextInt();
		m = sc.nextInt();
		int f=-1;
		for(int i=m;i<=n;i+=m){
			if(i<=n && 2*i>=n){
				f=i;
				break;
			}
		}
		System.out.println(f);
		sc.close();
	}
}