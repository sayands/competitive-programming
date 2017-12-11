import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Circular_Array_Rotation {
      public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int q = in.nextInt();
        int[] a = new int[n];
        int res[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            res[(i+k)%n] = a[i];
        }
        for(int a0 = 0; a0 < q; a0++){
            int m = in.nextInt();

            System.out.println(res[m]);
        }
    }
}
