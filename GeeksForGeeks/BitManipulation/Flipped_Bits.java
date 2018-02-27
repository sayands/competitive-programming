//Count number of bits to be flipped from one number to other number

import java.util.*;

public class Flipped_Bits{
	static int countSetBits(int n){
		int count = 0;
		while(n != 0){
			count+= n & 1;
			n>>=1;
		}
		return count;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();		
		System.out.println(countSetBits(a^b));
		sc.close();
	}
}