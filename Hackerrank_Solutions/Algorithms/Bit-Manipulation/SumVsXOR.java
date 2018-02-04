import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class SumVsXOR {

    static long solve(long n) {
        // Complete this function
        long count = 0;
        while(n!=0){
            count += (n%2 == 0)?1:0;
            n/=2;
        }
        count = (long)Math.pow(2,count);
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long result = solve(n);
        System.out.println(result);
    }
}