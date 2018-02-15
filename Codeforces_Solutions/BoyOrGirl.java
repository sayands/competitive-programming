// 236A Solution
import java.util.*;
import java.util.Arrays;

public class BoyOrGirl{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		char arr[] = str.toCharArray();
		Arrays.sort(arr);
		int cnt = 0;
		for(int i=0;i<arr.length-1;i++){
			if(arr[i] != arr[i+1])
				cnt++;
		}

		if(cnt%2 != 0)
			System.out.println("CHAT WITH HER!");
		else
			System.out.println("IGNORE HIM!");

		sc.close();

	}
}