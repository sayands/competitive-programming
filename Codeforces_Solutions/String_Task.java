import java.util.*;

import javax.lang.model.util.ElementScanner6;

public class String_Task{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        String res = "";
        String vowel = "AEYIOUaeyiou";
        for(int i=0;i<word.length();i++){
            boolean m = false;
            for(int j=0;j<vowel.length();j++){
                if(vowel.charAt(j) == word.charAt(i)){
                    m = true;
                }    
            }
            if(!m){
                res+=".";
                if(word.charAt(i)>=65 && word.charAt(i)<=90)
                    res+= (char)(word.charAt(i) + 32);
                else
                    res+= word.charAt(i);    
            }
        }
        System.out.println(res);
        sc.close();
    }
}