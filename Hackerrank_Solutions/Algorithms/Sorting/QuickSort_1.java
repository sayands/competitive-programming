import java.io.*;
import java.util.*;

public class QuickSort_1 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        int pivot = arr[0];
        int left[] = new int[n];
        int right[] = new int[n];
        int equals[] = new int[n];
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<pivot)
                left[a++] = arr[i];
            else if(arr[i]>pivot)
                right[b++] = arr[i];
            else
                equals[c++] = arr[i];

        }
        for(int i=0;i<a;i++)
            System.out.print(left[i] + " ");
         for(int i=0;i<c;i++)
            System.out.print(equals[i] + " ");
         for(int i=0;i<b;i++)
            System.out.print(right[i] + " ");
    }
}
