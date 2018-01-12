import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class CamelCase {

    static int camelcase(String str) {
        // Complete this function
        int count=1;
        int n = str.length();
        for(int i=1;i<n;i++){
            if(str.charAt(i)>=65 && str.charAt(i)<=90)
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int result = camelcase(s);
        System.out.println(result);
        in.close();
    }
}