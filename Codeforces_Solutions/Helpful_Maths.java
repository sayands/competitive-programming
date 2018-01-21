//339A Solution

import java.util.*;
import java.util.Arrays;

public class Helpful_Maths{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int len = (s.length()+1)/2;
        //System.out.println(s.length()+ " " + len);
        int arr[] = new int[len];
        int x = 0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                arr[x] = Integer.parseInt(s.substring(i,i+1));
                x++;
            }      
        }
        Arrays.sort(arr);
        for(int i=0;i<len;i++){
            if(i==len-1)
                System.out.print(arr[i]);
            else
                System.out.print(arr[i] + "+");   
        }


        sc.close();
    }
}