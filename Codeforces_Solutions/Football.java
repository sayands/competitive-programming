//96A Solution

import java.util.*;
//import java.util.regex.Pattern;
//import java.util.regex.Matcher;

public class Football{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        int contiguous = 1;
        for(int i=1;i<word.length();i++){
            if(word.charAt(i) == word.charAt(i-1)){
                contiguous++;
                if(contiguous == 7){
                    System.out.println("YES");
                    System.exit(0);
                }
            }
            else
                contiguous=1;
        }
        System.out.println("NO");
        sc.close();
    }
}