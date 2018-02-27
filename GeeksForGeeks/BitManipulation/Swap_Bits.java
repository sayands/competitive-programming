//Swap Odd and Even Bits Of a Number

import java.util.*;

public class Swap_Bits{
	static int swapBits(int x){
		int even_bits = x & 0xAAAAAAAA;

		int odd_bits = x & 0x55555555;

		even_bits >>= 1;
		odd_bits <<= 1;

		return (even_bits | odd_bits);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(swapBits(n));

		sc.close();
	}
}