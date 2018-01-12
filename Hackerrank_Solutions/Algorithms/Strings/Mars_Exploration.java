import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Mars_Exploration {

    static int marsExploration(String s) {
        // Complete this function
        int n = s.length(),count=0;
        int m_times = n/3;
        String expected_str="";
        for(int i=0;i<m_times;i++)
            expected_str+="SOS";
        for(int i=0;i<n;i++){
            if(s.charAt(i) != expected_str.charAt(i))
                count++;
        }
        return count;
            
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int result = marsExploration(s);
        System.out.println(result);
        in.close();
    }
}
