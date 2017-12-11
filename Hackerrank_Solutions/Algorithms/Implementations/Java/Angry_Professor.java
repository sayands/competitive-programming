import java.io.*;
import java.util.*;

public class Angry_Professor {
    static String class_checker(int a[],int n,int k)
    {
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
                count++;
        }
        if(count<k)
            return "YES";
        else
            return "NO";
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        for(int i=1;i<=test;i++)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int arr[] = new int[n];
            for(int j=0;j<n;j++)
            {
                arr[j] = sc.nextInt();
            }
            System.out.println(class_checker(arr,n,k));
        }
    }
}
