import java.util.*;

public class Min_Max {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long arr[] = new long[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        long max = 0L,min=0L;
        long maxEl = arr[0];
        long minEl = arr[n-1];
        for(int i=0;i<n;i++){
            if(arr[i]>maxEl)
                maxEl=arr[i];
            if(arr[i]<minEl)
                minEl=arr[i];
            min = (long)(min+arr[i]);
            max = (long)(max+arr[i]);
        }
        max=(long)(max-minEl);
        min=(long)(min-maxEl);
        System.out.println(min + " " + max);

    }
}
