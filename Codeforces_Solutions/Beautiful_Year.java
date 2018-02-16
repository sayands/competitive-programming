//271A solution

import java.util.*;

public class Beautiful_Year{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int y = sc.nextInt();
		while(true){
			y+=1;
			int a = y%10;
			int b = (y/10)%10;
			int c = (y/100)%10;
			int d = (y/1000)%10;
			if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
				break;
		}
		System.out.println(y);
		sc.close();
	}
}