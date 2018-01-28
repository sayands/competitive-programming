//133A Solution
import java.util.*;

public class HQ9{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int flag=0;
		String str = sc.next();
		for(int i=0;i<str.length();i++){
			if(str.charAt(i) == 'H' || str.charAt(i) == 'Q' || str.charAt(i) == '9'){
				flag=1;
				break;
			}
		}
		if(flag == 1)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}