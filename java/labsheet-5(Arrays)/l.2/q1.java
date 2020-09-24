import java.util.*;
class q1{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the no of sticks:");
        int n=scan.nextInt();
        int[] a= new int[n];
        System.out.println("Enter the array elements:");
        for(int i=0;i<n;++i){a[i]=scan.nextInt();}
        Arrays.sort(a);
        System.out.println();
        int s=a[0];
        System.out.println("The no of sticks at each iteration:");
        System.out.print(n+" ");
        for(int i=1;i<n;++i){
            if(s!=a[i]) System.out.print(n-i+" ");
            s=a[i];
        }
    }
}