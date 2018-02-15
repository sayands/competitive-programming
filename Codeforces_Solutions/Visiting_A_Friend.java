//902A solution

import java.util.*;

public class Visiting_A_Friend{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int count = 0;
		for(int i=0;i<n;i++){
			int a = sc.nextInt();
			int b =sc.nextInt();
			if(a<=count && b>count)
				count=b;
		}
		if(count>=m)
			System.out.println("YES");
		else
			System.out.println("NO");
		sc.close();
	}
}