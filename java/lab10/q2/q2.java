import java.util.Scanner;
import package_name.ClassOne;
import package_one.ClassTwo;


public class q2 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter name:");
        String name=scan.next();
        System.out.println("Enter the rollno:");
        String rollno=scan.next();
        ClassOne a=new ClassOne(name);
        ClassTwo b=new ClassTwo(rollno);
        a.Print();
        b.print();
    }
}
