import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Pangrams {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int n = str.length(),flag=0;
        int arr[] = new int[26];
        str = str.toLowerCase();
        for(int i=0;i<n;i++){
            if(str.charAt(i) != ' ')
                arr[(int)(str.charAt(i) - 97)]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i] == 0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            System.out.println("pangram");
        else
            System.out.println("not pangram");
            
        
    }
}