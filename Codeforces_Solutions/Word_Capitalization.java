//281A Solution

import java.util.*;

public class Word_Capitalization{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        String res = String.valueOf(word.charAt(0)).toUpperCase() + word.substring(1,word.length());
        System.out.println(res);
        sc.close();
    }
}