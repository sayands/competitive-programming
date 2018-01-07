import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Missing_Numbers {

    static void missingNumbers(int[] arr, int[] brr) {
        int f1[] = new int[100001];
        int f2[] = new int[100001];
        for(int i=0;i<=10000;i++){
            f1[i]=0;
            f2[i]=0;
        }
        for(int i=0;i<arr.length;i++){
            f1[arr[i]]++;
        }
        for(int i=0;i<brr.length;i++){
            f2[brr[i]]++;
        }
        for(int i=1;i<=10000;i++){
            if(f1[i] != f2[i] && f1[i]>0 && f2[i]>0)
                    System.out.print(i + " ");
        }
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int m = in.nextInt();
        int[] brr = new int[m];
        for(int brr_i = 0; brr_i < m; brr_i++){
            brr[brr_i] = in.nextInt();
        }
        missingNumbers(arr, brr);
        System.out.println("");


        in.close();
    }
}