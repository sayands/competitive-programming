import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Arrays;

public class BigSorting {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] unsorted = new String[n];
        for(int unsorted_i=0; unsorted_i < n; unsorted_i++){
            unsorted[unsorted_i] = in.next();
        }
        // your code goes here
        Arrays.sort(unsorted,new Comparator<String>() {
            @Override
            public int compare(String a, String b)
            {
                if(a.length() == b.length())
                    return a.compareTo(b)>0?1:(a.compareTo(b)==0?0:-1);
                else
                    return a.length()>b.length()?1:-1;
            }
        });
        for(int i=0;i<n;i++)
            System.out.println(unsorted[i]);
   }
}
