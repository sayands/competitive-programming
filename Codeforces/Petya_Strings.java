import java.util.*;

public class Petya_Strings{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        int x = str1.compareTo(str2);
        System.out.println(x>=0?((x>0)?1:0):-1);
        sc.close();
    }
}