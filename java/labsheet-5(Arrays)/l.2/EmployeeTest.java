import java.util.*;
class Employee {

    private String empid;
    private String name;
    private int age;
    private String designation;
    private double salary;

    Employee(){
        empid=null;
        name=null;
        age=0;
        designation=null;
        salary=0.0;
    }

    public void setempid(String a){empid=a;}
    public void setname(String a){name=a;}
    public void setage(int a){age=a;}
    public void setsalary(double a){salary=a;}


    public void printDetails(){
        System.out.println("empid:"+empid+"\n"+"name:"+name+"\n"+"age:"+age+"\n"+"designation:"+designation+"\n"+"Salary:"+salary+"\n");
    }
    public void calculateBonus(double x){
        System.out.println("The salary:"+salary);
        System.out.println("The Bonus:"+salary*x);
        salary+=salary*x;
        System.out.println("The new salary:"+salary);
    }

    public void salaryBonus(){
        if(designation.equalsIgnoreCase("Manager")) calculateBonus(.3);
        else if(designation.equalsIgnoreCase("Supervisor")) calculateBonus(.2);
        else if(designation.equalsIgnoreCase("Worker")) calculateBonus(.1);
        else System.out.println("Invalid designation plz try again"); 
    }
    public boolean searchDetails(String x){
        if(x.equals(empid)) return true;
        return false;
    }
}
public class EmployeeTest{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the No of Employees:");
        int n=scan.nextInt();
        Employee[] a=new Employee[n];
        for(int i=0;i<n;i++){
            a[i]=new Employee();
            System.out.println("Enter the empid:");
            String empid=scan.next();
            System.out.println("Enter the name:");
            String name=scan.next();
            System.out.println("Enter the age:");
            int age=scan.nextInt();
            System.out.println("Enter the designation: ");
            System.out.println("designations:manager,supervisor,worker");
            String designation=scan.next();
            System.out.println("Enter the Salary:");
            double salary=scan.nextDouble();
            a[i].setempid(empid);
            a[i].setname(name);
            a[i].setage(age);
            a[i].setdesignation(designation);
            a[i].setsalary(salary);
        }
        while(true){
            System.out.println("Enter the choice:1-Print 2-Calculate bonus 3-Search 4-Exit");
            int c=scan.nextInt();
            switch(c){
                case 1:for(Employee p:a) p.printDetails();break;
                case 2:for(Employee p:a) p.salaryBonus();break;
                case 3:System.out.println("Enter the employee id u want to check:");
                    String e=scan.next();int l=0;
                    for(Employee p:a){
                        if(p.searchDetails(e)){
                            System.out.println("The Employee has been found");
                            l=1;
                            break;
                        }
                    }
                    if(l==1) break;
                    System.out.println("The Employee has not been found");
                    break;
                case 4:System.exit(0);
            }

        }
    }
}