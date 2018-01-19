import java.util.*;

public class Arrays{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nA = sc.nextInt();
        int nB = sc.nextInt();
        int k = sc.nextInt();
        int m = sc.nextInt();
        long A[] = new long[nA];
        long B[] = new long[nB];
        for(int i=0;i<nA;i++)
            A[i] = sc.nextLong();
        for(int i=nB-1;i>=0;i--)
            B[i] = sc.nextLong();
        if(A[k-1]<B[m-1])
            System.out.println("YES");
        else
            System.out.println("NO");            
        sc.close();
    }
}