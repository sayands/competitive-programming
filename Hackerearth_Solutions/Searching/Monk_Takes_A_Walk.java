import java.util.*;

public class Monk_Takes_A_Walk{
    static int vowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return 1;
        return 0;    
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = "";
        while(t > 0){
                s = sc.next();
                s = s.toLowerCase();
                int count = 0;
                for(int j=0;j<s.length();j++){
                    if(vowel(s.charAt(j)) > 0)
                            count++;
                }
                System.out.println(count);
                t--;
            }
        sc.close();
    }
}