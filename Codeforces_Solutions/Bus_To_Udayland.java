//711A Solution

import java.util.*;

public class Bus_To_Udayland{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int flag = -1;
        String str = "";
        String arr[] = new String[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.next();
        for(int i=0;i<n;i++){
            if(arr[i].charAt(0) == 'O' && arr[i].charAt(1) == 'O'){
                str = "++" + arr[i].substring(2);
                flag=i; break;
            }
            else if(arr[i].charAt(3) == 'O' && arr[i].charAt(4) == 'O'){
                str =  arr[i].substring(0,3) + "++";
                flag=i; break;
            }
        }    
        if(flag>=0){
            System.out.println("YES");
            for(int i=0;i<n;i++){
                if( i == flag)
                    System.out.println(str);
                else
                    System.out.println(arr[i]);    
            }

        }
        else
            System.out.println("NO");    
        sc.close();
    }
}