import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Funny_String {

    static String funnyString(String s){
        // Complete this function
        String s_reverse = "";
        for(int i=s.length()-1;i>=0;i--)
            s_reverse+=s.charAt(i);
        for(int i=1;i<s.length();i++){
            int d1 = Math.abs(s.charAt(i) - s.charAt(i-1));
            int d2 = Math.abs(s_reverse.charAt(i) - s_reverse.charAt(i-1));
            if(d1!=d2)
                return "Not Funny";
        }
        return "Funny";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            String result = funnyString(s);
            System.out.println(result);
        }
    }
}