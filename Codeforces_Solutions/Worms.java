//282C Solution

import java.util.*;

public class Worms{
	static int binarySearch(int a[], int item, int low, int high)
	{
      if (high <= low)
        return (item > a[low])?  (low + 1): low;
 
      int mid = (low + high)/2;
 
      if(item == a[mid])
        return mid;
  	  if(item > a[mid])
        return binarySearch(a, item, mid+1, high);
      return binarySearch(a, item, low, mid-1);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		int arr[] = new int[n];
		for(int i=0;i<n;i++){
			int k = sc.nextInt();
			sum += k;
			arr[i] = sum;
		}
		int m = sc.nextInt();
		int worms[] = new int[m];
		for(int i=0;i<m;i++){
			int k = sc.nextInt();
			worms[i] = binarySearch(arr,k,0,arr.length) + 1;
		}
		for(int i=0;i<m;i++)
			System.out.println(worms[i]);
		sc.close();
	}
}