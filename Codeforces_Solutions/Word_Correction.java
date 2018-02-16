//938A solution

import java.util.*;

public class Word_Correction{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String vowel = "aeiou";
		String str = sc.next();
		String res = "";
		for(int i=0;i<n;i++){
			char ch = str.charAt(i);
			if(vowel.indexOf(ch)>=0){
				if(str.charAt(i+1) == vowel.charAt(vowel.indexOf(ch)+1))
					res += str.charAt(i);
					i++;
			}
			else
				res += str.charAt(i);
		}
		System.out.println(res);
		sc.close();
	}
}