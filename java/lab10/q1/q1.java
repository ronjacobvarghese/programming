
import java.util.Scanner;
import lab10.q1.mypackage.myclass;

public class q1 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the name:");
        myclass a=new myclass();
        String s=scan.next();
        a.getNames(s);
        a.printName();
    }
}
