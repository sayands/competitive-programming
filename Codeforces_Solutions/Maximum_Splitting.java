// 870C Solution

import java.util.*;

public class Maximum_Splitting{
    static int solve(int num){
        if(num == 1 || num == 2 || num == 3 || num == 5 || num == 7 || num == 11)
            return -1;
        int t = num/4 - num%2;
        return t>0?t:-1;    
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        for(int i=0;i<q;i++){
            int n = sc.nextInt();
            int res = solve(n);
            System.out.println(res);
        }
        sc.close();
    }
}

