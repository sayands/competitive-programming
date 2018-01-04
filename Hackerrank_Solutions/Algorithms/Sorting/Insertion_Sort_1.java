import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Insertion_Sort_1 {



    public static void insertIntoSorted(int[] ar,int n) {
        // Fill up this function
        int temp = ar[n-1],index=0;
        for(int i=0;i<n-1;i++)
        {  if(temp >= ar[i] && temp<=ar[i+1])
            {
                index=i+1; break;
            }
        }
        for(int i = n-1;i>index;i--){
            ar[i] = ar[i-1];
            printArray(ar);
        }
        ar[index] = temp;
        printArray(ar);
    }


/* Tail starts here */
     public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
         for(int i=0;i<s;i++){
            ar[i]=in.nextInt();
         }
         insertIntoSorted(ar,s);
    }


    private static void printArray(int[] ar) {
      for(int n: ar){
         System.out.print(n+" ");
      }
        System.out.println("");
   }


}
