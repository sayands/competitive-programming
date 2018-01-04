import java.io.*;
import java.util.*;

public class Intro_To_Tutorials {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int V = sc.nextInt();
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        int low = 0,high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid] == V)
            {
                System.out.println(mid);
                break;
            }
            else if(V>arr[mid])
                low = mid+1;
            else
                high = mid-1;
        }
    }
}
