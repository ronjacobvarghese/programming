import java.util.Scanner;
public class Person{
    public String name;
    public String address;
    public String city;
    public String state;
    public int code;
    
    public Person(){}
    
    public void Print(){
        System.out.println();
        System.out.println("Name:"+name);
        System.out.println("Address :"+address);
        System.out.println("city:"+city);
        System.out.println("State:"+state);
        System.out.println("Zip code:"+code);
    }
    public static void main (String[] arg){
        Scanner scan = new Scanner(System.in);
        Person obj = new Person();
        System.out.println("Enter the name:");
        obj.name=scan.next();
        System.out .println("Enter the Address:");
        obj.address = scan.next();
        System.out .println("Enter the City:");
        obj.city=scan.next();
        System.out .println("Enter the State:");
        obj.state=scan.next();
        System.out .println("Enter the Zip Code:");
        obj.code=scan.nextInt();
        obj.Print();
    }
}
