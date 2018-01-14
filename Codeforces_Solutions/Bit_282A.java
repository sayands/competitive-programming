import java.util.*;

public class Bit_282A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int res=0;
        for(int i=0;i<n;i++){
            String word = sc.next();
            if(word.charAt(0) == '+')
                res++;
            else if(word.charAt(0) == '-')
                res--;
            else{
                if(word.charAt(1) == '+')
                    res++;
                else 
                    res--;
            }        
        }
        System.out.println(res);
        sc.close();
    }
} 