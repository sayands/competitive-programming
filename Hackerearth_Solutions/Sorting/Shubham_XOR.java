import java.util.*;

public class Shubham_XOR {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++)
            a[i] = sc.nextInt();
        Arrays.sort(a);
        long m=1;
        long total = 0;
        for(int i = 1 ;i<n;i++){
            if(a[i]==a[i-1])
            m++;
            else{
                total = total+(m*(m-1)/2);
                m=1;
            }
        }
        
        System.out.println(total);

    }
}