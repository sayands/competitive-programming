import java.util.*;

public class Rest_In_Peace {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String array[] = new String[n];
        for(int i=0;i<n;i++)
            array[i] = sc.next();
        for(int i=0;i<n;i++){
            if(array[i].indexOf("21") != -1  || Integer.parseInt(array[i])%21 == 0)
                System.out.println("The streak is broken!");
            else
                System.out.println("The streak lives still in our heart!");
        }    

    }
}
