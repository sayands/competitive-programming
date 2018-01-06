import java.util.*;

public class LECANDY{
    public static void solve(long a[],int n,long c){
        long sum = 0L;

        for(int i=0;i<n;i++){
            sum = (long)(sum + a[i]);
        }
        if(c>=sum)
            System.out.println("Yes");
        else
            System.out.println("No");    
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            int n = sc.nextInt();
            long c = sc.nextLong();
            long a[] = new long[n];
            for(int j=0;j<n;j++)
                a[j] = sc.nextLong();
            solve(a,n,c);    
        }
        sc.close();
    }
}