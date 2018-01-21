//136A Solution

import java.util.*;

public class Presents{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); int temp;
        int arr[] = new int[n+1];
        arr[0] = 0;
        for(int i=1;i<=n;i++){
            temp = sc.nextInt();
            arr[temp] = i;
        }
        for(int i=1;i<=n;i++)
            System.out.print(arr[i] + " ");

        sc.close();
    }   
}