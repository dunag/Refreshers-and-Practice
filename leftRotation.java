import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.*;

public class Solution {

    public static int[] arrayLeftRotation(int[] a, int n, int k) {
      
        
         if (a == null || n <= 1) {
        return a;
    }
        
        for(int j = 0; j < k; j++){
            int start = a[0];
            System.arraycopy(a, 1, a, 0, n - 1);
            a[n-1] = start;
            
        }
        return a;

    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
      
        int[] output = new int[n];
        output = arrayLeftRotation(a, n, k);
        for(int i = 0; i < n; i++)
            System.out.print(output[i] + " ");
      
        System.out.println();
      
    }
}
