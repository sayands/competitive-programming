import java.io.*;
import java.util.*;

public class Find_Digits{
    static int divisble_digits(int n)
    {
        int count=0,m=n;
        while(n!=0)
        {
            int r = n%10;
            if(r!=0  && m%r== 0)
                count++;
            n/=10;
        }
        return count;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            System.out.println(divisble_digits(arr[i]));
        }
    }
}
