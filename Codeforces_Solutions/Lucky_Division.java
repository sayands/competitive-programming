//122A solution

import java.util.*;

public class Lucky_Division{
	static boolean lucky(int n){
		while(n!=0){
			if(n%10 !=4 && n%10 !=7)
				return false;
			n/=10;
		}
		return true;
	}
	static boolean almost_lucky(int n){
		if(lucky(n))
			return true;
		for(int i=2;i*i<=n;i++){
			if(n%i == 0 && (lucky(i) || lucky(n/i)))
				return true;
		}
		return false;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if(almost_lucky(n))
			System.out.println("YES");
		else
			System.out.println("NO");
		sc.close();
	}
}