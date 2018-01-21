//427A Solution

import java.util.*;

public class Police_Recruits{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum=0,count=0;
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        for(int i=0;i<n;i++){
           if(arr[i] != -1)
            sum += arr[i];
           else if(arr[i] == -1){
               if(sum<=0)
                    count++;
               else
                    sum -= 1;     
           }   

        }
        System.out.println(count);
        sc.close();
    }
}