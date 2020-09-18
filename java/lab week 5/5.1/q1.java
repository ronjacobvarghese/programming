import java.util.*;
class myfunc{
    public static void  func(String a,String b,int n){
        System.out.println(a.substring(0,n)+b.substring(b.length()-n,b.length()));
    }

}
public class q1 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the string1:");
        String a=scan.nextLine();
        System.out.println("Enter the string2:");
        String b=scan.nextLine();
        System.out.println("Enter the length of prefix/suffix:");
        int n=scan.nextInt();
        myfunc.func(a,b,n);
    }
    
}
