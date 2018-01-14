import java.util.*;

public class Caps_Lock{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();int flag=0;
        for(int i=1;i<word.length();i++){
            if(!(word.charAt(i)>=65 && word.charAt(i)<=90)){
                flag=1;
                break;
            }
        }
        if(flag==0 && (word.charAt(0)>=97 && word.charAt(0)<=122)){
            word = word.toLowerCase();
            String res = (char)(word.charAt(0)-32) + word.substring(1);
            System.out.println(res);   
        }
        else if(flag==0 && (word.charAt(0)>=65 && word.charAt(0)<=90))
            System.out.println(word.toLowerCase());
        else
            System.out.println(word);
        sc.close();
    }
}