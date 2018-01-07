import java.io.*;
import java.util.*;

class Stack{
    int top;
    long Stck[] = new long[100000];
    Stack(){
        top = -1;
    }
     void push(long x){
        if(top!=100000-1){
            Stck[++top] = x;
        }
    }
     void pop(){
        if(top!=-1){
            top--;
        }
    }
     void maxEle(){
        long max = 0;
         for(int i=top;i>=0;i--){
             if(Stck[i]>max)
                 max=Stck[i];
         }
         System.out.println(max);
    }
}
public class Maximum_Element {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        Stack obj = new Stack();
        int n = sc.nextInt();
        for(int i=1;i<=n;i++){
            int ch = sc.nextInt();
            if(ch==1){
                long num = sc.nextLong();
                obj.push(num);
            }  
            else if(ch==2)
                obj.pop();
            else
                obj.maxEle();
        }
    }
}