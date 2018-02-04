//Maximising XOR

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Maximising_XOR {

    static int maximizingXor(int l, int r) {
        // Complete this function
        int max = l^l;
        for(int i=l;i<=r;i++){
            for(int j=i;j<=r;j++){
                if((i^j)>max)
                    max = i^j;
            }
        }
        return max;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int l = in.nextInt();
        int r = in.nextInt();
        int result = maximizingXor(l, r);
        System.out.println(result);
        in.close();
    }
}