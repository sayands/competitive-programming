//Compute the Nth Magic Number

import java.util.*;

public class Magic_Number{
	static int nthMagic(int n){
		int pow = 1,answer = 0;

		while(n!=0){
			pow = pow*5;

			if((int)(n & 1) == 1)
				answer+=pow;

			n>>=1;
		}

		return answer;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number...");
		int n = sc.nextInt();

		System.out.println("Magic number---" + nthMagic(n));

	}
}