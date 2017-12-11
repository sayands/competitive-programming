import java.io.*;
import java.util.*;

public class Cut_The_Sticks {
    static int minimum(int a[],int n)
    {
        int min=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                min = a[i];
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {   min = Math.min(a[i],min);
                flag++;
            }
        }
        return (flag > 0)?min:-1;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       int arr[] = new int[n];
       for(int i=0;i<n;i++)
           arr[i] = sc.nextInt();
       int min = minimum(arr,n);
       while(min!=-1)
        {
           int count=0;
           for(int i=0;i<n;i++)
                if(arr[i]!=0)
                    count++;
            for(int i=0;i<n;i++)
                 arr[i] = (arr[i]-min >0)?(arr[i]-min):0;

            System.out.println(count);
            min = minimum(arr,n);
         }
    }
}
