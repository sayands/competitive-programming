import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Jumping_On_The_Clouds_Revisited {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int c[] = new int[n];
        for(int c_i=0; c_i < n; c_i++)
            c[c_i] = in.nextInt();
        int i=0,E=100;
        do{
            i = (i+k)%n;
            E = (E-1) - ((c[i]==1)?2:0);
        }while(i!=0 && i<n);
        System.out.println(E);
    }
}
