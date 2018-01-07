import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Find_The_Median{
   static int partition_func(int a[],int low,int high)
{
    int i,j,temp,key;
    key=a[low];
    i=low+1; j=high;
    while(true)
    {
        while(i<high && key>=a[i]) i++;
        while(key<a[j]) j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            temp=a[low];
            a[low]=a[j];
            a[j]=temp;
            return (j);
        }
    }//while(1)
}//partition
  static void quick_sort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition_func(a,low,high);
        quick_sort(a,low,j-1);
        quick_sort(a,j+1,high);
    }
}
    static int findMedian(int[] arr) {
        return arr[(arr.length+1)/2 - 1];
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        quick_sort(arr,0,n-1);
        int result = findMedian(arr);
        System.out.println(result);
        in.close();
    }
}

