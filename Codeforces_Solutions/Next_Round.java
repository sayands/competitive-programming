import java.util.*;

public class Next_Round{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt(); int count=0;
        int arr[] = new int[n+1];
        arr[0] = 0;
        for(int i=1;i<=n;i++)
            arr[i] = sc.nextInt();
        int val = arr[k];
        for(int i=1;i<=n;i++){
            if(arr[i]>=val && arr[i]>0)
                count++;
        }
        System.out.println(count);       
        sc.close();
    }
}