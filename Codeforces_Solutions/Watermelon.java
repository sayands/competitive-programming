import java.util.*;

public class Watermelon{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        int flag = 0;
        for(int i=2;i<=w;i+=2){
            if((w-i)%2 == 0 && (w-i)!=0){
                flag=1;
                break;
            }

        }
        if(flag == 0)
            System.out.println("NO");
        else
            System.out.println("YES");    
        sc.close();
    }
}