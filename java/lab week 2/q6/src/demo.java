import java.util.Scanner;
public class demo {
    public static void main(String[] arg){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the Name :");
        String name=scan.next();
        System.out.println("Enter the Salary :");
        Double salary=scan.nextDouble();
        Employee obj=new Employee(name,salary);
        obj.getname();
        obj.getsal();
        System.out.println("Enter the amount you want to raise:");
        int n=scan.nextInt();
        obj.raise(n);
    }
    
}