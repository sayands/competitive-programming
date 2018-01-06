import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Sherlock_And_Array {

    static String solve(int[] a){
        long sum_left=0L,sum_right=0L;
        for(int i=0;i<a.length;i++)
                sum_right = (long)(sum_right + a[i]); 
        for(int i=0;i<a.length;i++){
            sum_right = (long)(sum_right - a[i]);
            if(sum_right == sum_left)
                    return "YES";
            sum_left = (long)(sum_left + a[i]);
        }
        return "NO";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for(int a0 = 0; a0 < T; a0++){
            int n = in.nextInt();
            int[] a = new int[n];
            for(int a_i=0; a_i < n; a_i++){
                a[a_i] = in.nextInt();
            }
            String result = solve(a);
            System.out.println(result);
        }
    }
}