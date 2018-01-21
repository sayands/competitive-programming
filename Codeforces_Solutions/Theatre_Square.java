//1A Solution

import java.util.*;

public class Theatre_Square{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = sc.nextLong();
        long a = sc.nextLong();
        long res = ((n+a-1)/a) * ((m+a-1)/a);
        System.out.println(res);
        sc.close();
    }
}