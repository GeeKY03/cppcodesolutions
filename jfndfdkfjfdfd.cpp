import java.util.Scanner;
import java.lang.*;
import java.io.*;	

public class temporary {	
    public static void main(String[] args) {
    	Scanner sc=new Scanner(System.in);
    	int cases=sc.nextInt();
    	for(int i=0;i<cases;i++) {
    		int n=sc.nextInt();
    		int k=sc.nextInt();
    		int t=(int)((2*n-1-Math.sqrt(4*n*n-4*n+1-8*k))/2);
    		for(int j=1;j<=t;j++) {
    		System.out.print((n-j+1)+" ");
    		}
    		int imp=(int)(k-t*n+t*((t+1)/2)+1);
    		System.out.print(imp+" ");
    		for(int l=1;l<imp;l++) System.out.print(l+" ");
    		if(imp<n-t) {
    			for(int m =imp+1;m<=n-t;m++) System.out.print(m+" ");
    		}
    		System.out.println();
    	}
    }
}