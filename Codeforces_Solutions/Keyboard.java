//474A Solution

import java.util.*;

public class Keyboard{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = "qwertyuiopasdfghjkl;zxcvbnm,./";
		char ch = sc.next().charAt(0);
		String input = sc.next();
		int j = (ch == 'R')?-1:1;
		String res = "";
		for(int i=0;i<input.length();i++){
			int index = str.indexOf(input.charAt(i));
			res = res + str.charAt(index + j);
		}
		System.out.println(res);
		sc.close();
	}
}