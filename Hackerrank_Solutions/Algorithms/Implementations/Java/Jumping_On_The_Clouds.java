import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Jumping_On_The_Clouds {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int c[] = new int[n];
        for(int c_i=0; c_i < n; c_i++){
            c[c_i] = in.nextInt();
        }
        int count = 0,i=0;
        while(i<n-1)
        {
            if(i==n-2)
            {  count++; break;}
            else if(c[i+1] == 0 && c[i+2] ==1)
                i++;
            else if(c[i+2] == 0 && i<n-1)
                i+=2;

            count++;
        }
        System.out.println(count);
    }
}
