//230B Solution

import java.util.*;

import javax.lang.model.util.ElementScanner6;

public class T_Primes{
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean isPrime[] = new Boolean[1000001];
        isPrime[0] = isPrime[1] = false;
        for(int i=2;i<=1000000;i++)
            isPrime[i] = true;
        for(int i=2;i*i<=1000000;i++){
            if(isPrime[i] == true){
                for(int multiple=i*2;multiple<=1000000;multiple+=i)
                    isPrime[multiple] = false;
            }
        }
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            long n = sc.nextLong();
            long sqr = (long)Math.sqrt(n);
            if(sqr*sqr == n && isPrime[(int)sqr])
                System.out.println("YES");
            else
                System.out.println("NO");        
        }
        sc.close();
    }
}