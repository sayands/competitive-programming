import java.util.*;

public class Square_Transaction {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int arr[] = new int[t];
        for(int i=0;i<t;i++)
            arr[i] = sc.nextInt();
        int q = sc.nextInt();
        for(int i=0;i<q;i++){
            long val = sc.nextInt();
            long sum = 0L; int flag=0;
            for(int j=0;j<t;j++){
                sum=(long)(sum + arr[j]);
                if(sum>=val){
                    System.out.println(j+1);
                    flag=1;
                    break;
                }
            }
            if(flag == 0)
                System.out.println(-1);
        }

    }
}