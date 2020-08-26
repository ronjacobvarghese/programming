import java.util.Scanner;

public class TestOddAndEven {
    public static void main(String[] arg){
        Scanner scan=new Scanner(System.in);
        OddAndEven obj=new OddAndEven();
        String q;
        while(true){
            Systen.out.println("Enter the number:");
            int i=scan.nextInt();
            obj.addNumber(i);
            System.out.println("Do you want to continue Y/Q");
            q=scan.next();
            if(q.charAt(0)=='Q'){
                break;
            }
        }
        obj.string();
    }
    
}