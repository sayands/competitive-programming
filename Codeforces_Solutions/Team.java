//231A Solution

import java.util.*;

public class Team{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        for(int i=0;i<n;i++){
            int a[] = new int[3];
            for(int j=0;j<3;j++)
                a[j] = sc.nextInt();
            if(a[0] == 1){
                if(a[1] ==1 || a[2] == 1)
                    count++;
            }
            else{
                if(a[1] == 1 && a[2] == 1)
                    count++;
            }

        }
        System.out.println(count);
        sc.close();
    }
}