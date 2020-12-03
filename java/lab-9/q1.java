import java.util.*;
public class q1 {

    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("enter the length of the array:");
        try{
            int n=scan.nextInt();
            int[] a=new int[n];
            System.out.println("Enter the index:");          
        }catch(NegativeArraySizeException e){
            System.out.println("The length cannot be negative");
        }catch(Exception e){
            System.out.println("The exception has been found");
        }
    }
}