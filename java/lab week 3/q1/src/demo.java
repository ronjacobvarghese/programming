import java.util.Scanner;
public class demo {
    public static void main(String[] arg){
        Scanner scan=new Scanner(System.in);
        tree obj=new tree();
        System.out.println("The current height of tree is "+obj.getheight()+"meters");
        System.out.println("At which cycle do u want to see its predicted growth:");
        int n=scan.nextInt();
        obj.currentheight(n);
        System.out.println("The current height of tree is "+obj.getheight()+"meters");


    }
    
}