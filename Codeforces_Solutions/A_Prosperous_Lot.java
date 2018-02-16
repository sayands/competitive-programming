//934B solution

import java.util.*;

public class A_Prosperous_Lot{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k = sc.nextInt();
		//System.out.println();
		if(k<37){
			for(int i=2;i<=k;i+=2)
				System.out.print(8);
			if(k%2 != 0)
				System.out.print(6);
		}
		else
			System.out.print(-1);

		sc.close();
	}
}