import java.util.*;

class Easy_Going {
    public static void main(String args[] ) throws Exception {
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       for(int i=0;i<t;i++){
        int n = sc.nextInt();
       int m = sc.nextInt();
       int arr[] = new int[n];
       for(int j=0;j<n;j++)
            arr[j] = sc.nextInt();
        Arrays.sort(arr);
        long sum = 0L,maxsum=0L,minsum=0L;
        for(int k=0;k<n-m;k++){
            minsum+=arr[k];
        }
        for(int k=n-1;k>=m;k--){
            maxsum+=arr[k];
        }
           
        System.out.println((long)(maxsum-minsum));
        }
       

    }
}