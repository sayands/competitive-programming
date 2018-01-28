//266A Solution

import java.util.*;

public class Stones_On_The_Table{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        int n = sc.nextInt();
        String s = sc.next();
        for(int i=0;i<n-1;i++){
            if(s.charAt(i) == s.charAt(i+1))
                    count++;
        }
        System.out.println(count);
        sc.close();
    }    
}

