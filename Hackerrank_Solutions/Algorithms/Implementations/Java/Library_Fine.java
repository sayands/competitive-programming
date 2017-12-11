import java.io.*;
import java.util.*;

public class Library_Fine {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int day = sc.nextInt();
        int month = sc.nextInt();
        int year = sc.nextInt();
        int e_day = sc.nextInt();
        int e_month = sc.nextInt();
        int e_year = sc.nextInt();
        if(year >= e_year)
        {
            if(year > e_year)
                System.out.println(10000);
            else if(month>e_month)
                System.out.println((month-e_month)*500);
            else if(day> e_day && month>=e_month)
                System.out.println((day-e_day)*15);
            else if( day<=e_day || month<e_month)
                System.out.println(0);
        }
        else
            System.out.println(0);
    }
}
