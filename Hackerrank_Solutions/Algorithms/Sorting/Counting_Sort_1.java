import java.io.*;
import java.util.*;

public class Counting_Sort_1{

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int count[] = new int[100];
        //count ={0};
        for(int i=0;i<n;i++)
        {  arr[i] = sc.nextInt();
           count[arr[i]]++;
        }
        for(int i=0;i<100;i++)
            System.out.print(count[i] + " ");
    }
}
