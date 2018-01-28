//474B Solution

import java.util.*;

public class XORAndOR{
	static int countOnes(String str){
		int count = 0;
		for(int i=0;i<str.length();i++){
			if(str.charAt(i)  == '1')
				count++;
		}
		return count;
	}
	static boolean check(int na,int nb){
		if(na == 0 || nb == 0)
			return (na == 0)&&(nb == 0);
		return true;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		String b = sc.next();
		int na = countOnes(a);
		int nb = countOnes(b);
		if(a.length() == b.length() && check(na,nb))
			System.out.println("YES");
		else
			System.out.println("NO");

	}
}