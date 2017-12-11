import java.io.*;
import java.util.*;

public class Viral_Advertising {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int res = 0,m=5;
        for(int i=2;i<=n+1;i++)
        {
             res+=(m/2);
             m = (m/2)*3;
        }
        System.out.println(res);

    }
}
