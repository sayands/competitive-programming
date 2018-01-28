//58A Solution

import java.util.*;

public class ChatRoom{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String word = sc.next();
		//String str = "hello";
		int pos = 0;
		while(pos<word.length() && word.charAt(pos) != 'h')
			pos++;
		pos++;
		while(pos<word.length() && word.charAt(pos) != 'e')
			pos++;
		pos++;
		while(pos<word.length() && word.charAt(pos) != 'l')
			pos++;
		pos++;
		while(pos<word.length() && word.charAt(pos) != 'l')
			pos++;
		pos++;
		while(pos<word.length() && word.charAt(pos) != 'o')
			pos++;
		if(pos<word.length())
			System.out.println("YES");
		else
			System.out.println("NO");

		sc.close();
	}
}