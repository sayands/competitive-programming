import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Sequence_Equation {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n+1];
        int ans[] = new int[n+1];
        for(int i=1;i<=n;i++)
            arr[i] = sc.nextInt();
        for(int i=1;i<=n;i++)
            ans[arr[arr[i]]] = i;
        for(int i=1;i<=n;i++)
            System.out.println(ans[i]);


    }
}
