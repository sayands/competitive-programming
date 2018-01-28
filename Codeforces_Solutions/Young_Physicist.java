//69A Solution
import java.util.*;

public class Young_Physicist{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long sumA=0L,sumB=0L,sumC=0L;
		for(int i=0;i<n;i++){
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = sc.nextInt();
			sumA =(long)(sumA + a);
			sumB =(long)(sumB + b);
			sumC =(long)(sumC + c);
		}
		if((sumA == 0 && sumB == 0 && sumC == 0))
			System.out.println("YES");
		else
			System.out.println("NO");
		sc.close();
	}
}