import java.io.*;
import java.util.*;

public class Beautiful_Days_At_The_Movie {
    static int reversed(int a)
    {
        int sum=0;
        while(a!=0)
        {
            int r = a%10;
            sum = sum*10 + r;
            a/=10;
        }
        return sum;
    }
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int i = sc.nextInt();
       int j = sc.nextInt();
       int k = sc.nextInt(); int count=0;
       for(int n=i;n<j;n++)
       {
           if(Math.abs(n - reversed(n))%k==0 )
               count++;
       }
       System.out.println(count);
    }
}
