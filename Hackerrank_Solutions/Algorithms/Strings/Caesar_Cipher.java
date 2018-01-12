import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Caesar_Cipher{

    static String caesarCipher(String str, int k) {
        // Complete this function
        String res="";
        int n = str.length();
        k%=26;
        for(int i=0;i<n;i++){
            if(str.charAt(i)>=65 && str.charAt(i)<=90){
                int sum = (int)(str.charAt(i)) + k;
                if(sum>90)
                    res+=(char)(str.charAt(i) + (k-26));
                else
                    res+= (char)(str.charAt(i) + k);
            }
            else if(str.charAt(i)>=97 && str.charAt(i)<=122){
                int sum = (int)(str.charAt(i)) + k;
                if(sum>122)
                    res+=(char)(str.charAt(i) + (k-26));
                else
                    res+= (char)(str.charAt(i) + k);
            }
                
            else
                res+=str.charAt(i);
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        int k = in.nextInt();
        String result = caesarCipher(s, k);
        System.out.println(result);
        in.close();
    }
}