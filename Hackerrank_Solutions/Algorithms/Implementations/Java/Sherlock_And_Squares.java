import java.io.*;
import java.util.*;

public class Sherlock_And_Squares {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        for(int i=1;i<=test;i++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int count = (int)(Math.floor(Math.sqrt(b)) - Math.ceil(Math.sqrt(a)) + 1) ;
            System.out.println(count);
        }
    }
}
