//41A solution

import java.util.*;

public class Translation{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str1 = sc.next();
		String str2 = sc.next();
		String res = "";
		for(int i = str1.length()-1;i>=0;i--)
			res += str1.charAt(i);
		//System.out.println(res);
		if(res.equals(str2))
			System.out.println("YES");
		else
			System.out.println("NO");
		sc.close();
	}
}