
//110A Solution

import java.util.*;

public class Nearly_Lucky_Number{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		int count = 0;
		while(n!=0){
			if(n%10 ==4 || n%10 == 7)
				count++;
			n/=10;
		}
		if(count == 4 || count == 7)
			System.out.println("YES");
		else
			System.out.println("NO");
		sc.close();
	}
}