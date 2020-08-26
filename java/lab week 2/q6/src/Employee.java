public class Employee {
    public long id;
    private String name;
    private double salary;

    public Employee(){
        id=00000;
        name="XXX";
        salary=9001;
    }
    public Employee(String a,double n){
        name=a;
        salary=n;
    }
    public double getsal(){
        return salary;
    }
    public String getname(){
        return name;
    }
    public void raise(int n){
        salary+=salary*n/100;
        System.out.println("A raise of "+n+"% of salary adds to Rs"+salary);
        
    }
}