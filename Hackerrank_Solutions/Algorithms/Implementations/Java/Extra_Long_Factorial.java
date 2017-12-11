import java.io.*;
import java.util.*;
import java.math.*;

public class Extra_Long_Factorial {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger fact = new BigInteger("1");
        for(int i=2;i<=n;i++)
            fact = fact.multiply(BigInteger.valueOf(i));
        System.out.println(fact);
    }
}
