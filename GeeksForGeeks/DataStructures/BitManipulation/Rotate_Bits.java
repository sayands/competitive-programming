//Rotate Bits of a Number 'n'

import java.util.*;

public class Rotate_Bits{
	static final int INT_BITS = 32;
	
	static int left_rotation(int n, int d){
		return (n<<d) | (n>>(INT_BITS - d));
	}
	static int right_rotation(int n, int d){
		return (n>>d) | (n<<(INT_BITS - d));
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter values of n and d...");
		int n = sc.nextInt();
		int d = sc.nextInt();

		System.out.println("Left Rotation---" + left_rotation(n, d));
		System.out.println("Right Rotation---" + right_rotation(n, d));

		sc.close();
	}
}