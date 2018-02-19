//758A solution
import java.util.*;

public class Holiday_Of_Equality{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int max = a[0];
		for(int i=0;i<n;i++){
			if(a[i]>=max)
				max = a[i];
		}
		int count=0;
		for(int i=0;i<n;i++){
			if((max-a[i])>=0)
				count = count + (max-a[i]);
		}
		System.out.println(count);
	}
}