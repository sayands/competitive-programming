//Maximum subarray XOR value in a given array

import java.util.*;

public class Max_SubArray_XOR{
	static int maxSubArrayXOR(int arr[], int n){
		int ans = Integer.MIN_VALUE;

		for(int i=0;i<n;i++){
			int curr_xor = 0;

			for(int j=i;j<n;j++){
				curr_xor = curr_xor ^ arr[j];
				ans = Math.max(ans, curr_xor);
			}
		}
		return ans;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<arr.length;i++)
			arr[i] = sc.nextInt();

		System.out.println("Maximum XOR value subarray---" + maxSubArrayXOR(arr, n));
	}
}